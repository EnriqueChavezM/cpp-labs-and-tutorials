# 4. Operadores

Los operadores se utilizan para realizar operaciones sobre valores.

---

## Tabla de Contenido

- [4. Operadores](#4-operadores)
  - [Tabla de Contenido](#tabla-de-contenido)
  - [Operadores Aritméticos](#operadores-aritméticos)
    - [Operadores Incremento / Decremento](#operadores-incremento--decremento)
    - [Operadores Aritméticos de Asignación](#operadores-aritméticos-de-asignación)
  - [Operaciones de Comparación](#operaciones-de-comparación)
  - [Operadores Lógicos](#operadores-lógicos)
  - [Ejemplo Practico](#ejemplo-practico)

---

## Operadores Aritméticos

Los operadores son símbolos especiales que representan cálculos simples, como la suma y la multiplicación.

| Símbolo | Descripción | Descripción | Ejemplo |
| :---: | :---: | :--- | :---: |
| + | Suma | Agrega dos números | V = 3 + 2 = 5 |
| - | Resta | Resta el segundo al primer número | V = 3 - 2 = 1 |
| * | Multiplicación | Multiplica dos números | V = 3 * 2 = 6 |
| / | División | Divide el primer número entre el segundo y da decimales | V = 4 / 2 = 2 |
| % | Modulo | Da el residuo o resto de una división | V = 10 % 3 = 1 |

> [!NOTA]
> Al trabajar con **números decimales**, usamos el tipo de datos ``double``, que puede almacenar números con puntos decimales.
> Los mismos operadores aritméticos **(+, -, *, /)** funcionan con ``doubles`` al igual que lo hacen con los enteros
> No se puede usar el operador de módulo % directamente con números de punto flotante (doubles). En su lugar, debe usar la función ``fmod()`` *[Ver información](/02_Módulos_Librerías/02_Librerias_Estandar/01_Librerias.md#modulo-cmath)*.

### Operadores Incremento / Decremento

Los operadores de incremento y decremento se utilizan para aumentar o disminuir el **valor de una variable en 1**. Estos operadores son ampliamente utilizados en programación, especialmente en bucles y contadores.
El operador de incremento se representa con dos signos más `++`, y el operador de decremento se representa con dos signos menos `--`.

***Sintaxis***

```cpp
variable ++;  // Incrementa el valor sumando 1
variable --;  // Reduce el valor restando 1
```

Estos operadores tienen dos formas:

1. **Prefija:** incrementa/decrementa la variable y después devuelve el nuevo valor.
2. **Postfija:** devuelve el valor actual de la variable y después la incrementa/decrementa.

- **Ejemplo**

  ```cpp
  int x = 5;
  int y = x++;  // y = 5, x = 6 (postfijo: y obtiene el valor original, luego x se incrementa)

  int a = 5;
  int b = ++a;  // b = 6, a = 6 (prefijo: a se incrementa primero, luego b obtiene el nuevo valor)
  ```

  En el primer caso, ``a`` y se le asigna el valor original de `x` **(5)**, y después `x` se incrementa a **6**. En el segundo caso, a se incrementa primero, y después su nuevo valor **(6)** se asigna a `b`.

Saber qué forma usar es importante en la práctica. **Por ejemplo**, en un juego podrías llevar la cuenta de la puntuación de un jugador con `score++` después de cada impacto, o usar `--lives` para reflejar inmediatamente una vida perdida antes de comprobar si la partida ha terminado. En los bucles, elegir entre el prefijo y el posfijo puede afectar al valor que se utiliza en una expresión antes o después de la actualización.

### Operadores Aritméticos de Asignación

Los operadores de asignación son aquellos que se utilizan para asignar un valor a una variable.

| Operador | Ejemplo | Equivalencia |
| :---: | :---: | :---: |
| = | X = 2 | X = 2 |
| += | X += 2 | X = X + 2 |
| -= | X -= 2 | X = X - 2 |
| *= | X *= 2 | X = X * 2 |
| /= | X /= 2 | X = X / 2 |
| %= | X %= 2 | X = X % 2 |

---

## Operaciones de Comparación

Los operadores de comparación se utilizan para comparar dos valores, que pueden ser números, caracteres, cadenas de caracteres, constantes o variables. El operador de comparación devuelve ``true`` si la comparación es correcta o ``false`` de lo contrario.

| Símbolo | Descripción | Ejemplo | Resultado |
| :---: | :---: | :---: | :---: |
| == | Igual que | X = (‘a’ == ‘b’) | X = False |
| != | Distinto que | X = (‘a’ != ‘b’) | X = True |
| < | Menor que | X = (1 < 10) | X = True |
| > | Mayor que | X = (11 > 22) | X = False |
| <= | Menor o igual que | X = (12 <= 15) | X = True |
| >= | Mayor o igual que | X = (12 >= 15) | X = False |

> [!TIP]
> Se puede realizar comparación de cadenas también con el método `compare()`*[Ver Información](/02_Módulos_Librerías/02_Librerias_Estandar/01_Librerias.md#modulo-string)

---

## Operadores Lógicos

Los operadores lógicos se utilizan para comprobar combinaciones de comparaciones que devuelven `true` o `false`.

| Operador | Significado |
| :---: | :--- |
| **&&** | Es una “y” lógica que devuelve un resultado *True* solo si todos sus operadores son *True* |
| **&#124;&#124;** | Es una “o” lógica que devuelve un resultado *True* solo si alguno sus operadores son *True* |
| **!** | Es una negación que devuelve un resultado *True* si su argumento es *False* |

> [!NOTA]
> Al comprobar varias condiciones, el ordenador deja de comprobarlas en cuanto conoce el resultado Final (esto se denomina evaluación de cortocircuito).
> Con `&&` (AND), si la primera condición es falsa, la segunda no se evaluará
> Con `||` (OR), si la primera condición es verdadera, la segunda no se evaluará
> Esto evita errores **(como la división entre cero)** y optimiza el rendimiento al evitar evaluaciones innecesarias.

---

## Ejemplo Practico

1. [Operadores Aritméticos Simples](/01_Fundamentos/04_Operadores/02_Aritmeticos_Simples.cpp)
2. [Operador Módulo](/01_Fundamentos/04_Operadores/03_Operador_Módulo.cpp)
3. [Operadores Incremento/Decremento](/01_Fundamentos/04_Operadores/04_Operadores_Incremento_Decremento.cpp)
4. [Operadores de Asignación](/01_Fundamentos/04_Operadores/05_Operadores_Asignacion.cpp)
5. [Operadores de Comparación](/01_Fundamentos/04_Operadores/06_Operadores_Comparacion.cpp)
6. [Operadores Lógicos](/01_Fundamentos/04_Operadores/07_Operadores_logicos.cpp)

---

[Inicio](#4-operadores)

---

[Tabla de contenido principal](/Tabla_Contenido.md)

---
