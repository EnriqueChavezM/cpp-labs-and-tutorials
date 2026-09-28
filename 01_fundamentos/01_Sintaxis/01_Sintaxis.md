# 1. Sintaxis Básica y Estructura de un Programa en C++

Antes de sumergirnos en conceptos más avanzados, es importante familiarizarse con algunos aspectos básicos de la sintaxis de C++.

---

## Tabla de Contenido

- [1. Sintaxis Básica y Estructura de un Programa en C++](#1-sintaxis-básica-y-estructura-de-un-programa-en-c)
  - [Tabla de Contenido](#tabla-de-contenido)
  - [1. Sintaxis Básica](#1-sintaxis-básica)
    - [Delimitar Bloques de Código](#delimitar-bloques-de-código)
    - [Finalizar Sentencias](#finalizar-sentencias)
    - [Sensibilidad a mayúsculas y minúsculas](#sensibilidad-a-mayúsculas-y-minúsculas)
  - [2. Comentarios](#2-comentarios)
  - [3. Estructura de un Programa en C++](#3-estructura-de-un-programa-en-c)
  - [Ejemplo Practico](#ejemplo-practico)

---

## 1. Sintaxis Básica

### Delimitar Bloques de Código

En **C++** las llaves `{}` delimitan un bloque de código. A diferencia de otros lenguajes que utilizan indentación o palabras clave, C++ utiliza llaves `{}` para determinar el alcance de cada declaración.

```cpp
int main() {
    std::cout << "Hello World!";
    return 0;
}
```

### Finalizar Sentencias

En C++, cada sentencia **debe terminar con un punto y coma** (``;``). Este punto y coma indica el final de una instrucción y ayuda al compilador a interpretar el código correctamente.

```cpp
float pi = 3.1416;  //Sentencia finalizada correctamente
int radio = 10      //Sentencia finalizada incorrectamente
```

> [!WARNING]
> Si se omite el punto y coma, el compilador generará un error.

### Sensibilidad a mayúsculas y minúsculas

C++ es un lenguaje *case-sensitive*, lo que significa que **distingue entre mayúsculas y minúsculas**.
**Por ejemplo:** variable, Variable y VARIABLE serían tres identificadores distintos.

> [!WARNING]
> Es importante ser consistente con el uso de mayúsculas y minúsculas para evitar errores.

---

## 2. Comentarios

Los comentarios son notas que escribes dentro del código. El compilador los ignora por completo; existen únicamente para ayudar a las personas a entender el código en el futuro.

Existen dos formas de escribir comentarios en el código:

1. **Comentarios de una sola línea:** Utilizados para comentarios breves que se extienden hasta el final de una línea. Se escriben utilizando dos barras diagonal (``//``) al principio de la línea.
2. **Comentarios de varias líneas:** Utilizados para comentarios más extensos que abarcan varias líneas. Se escriben utilizando una diagonal invertida y un asterisco al principio ``/*`` y un asterisco y una diagonal invertida ``*/`` al final del comentario.

**Ejemplo:**

```cpp
// Este es un comentario de una línea

/* Este es un
comentario de 
varias líneas */
```

---

## 3. Estructura de un Programa en C++

Todo programa en **C++** necesita obligatoriamente estos elementos:

1. **Directivas de preprocesador (`#include`):** Sirven para importar librerías. La más común al inicio es `<iostream>`, que permite manejar la entrada y salida de datos (como imprimir en pantalla).
2. **Función principal (``main``):** Es el punto de entrada y salida de cualquier aplicación en **C++**. El sistema operativo busca esta función para comenzar a ejecutar el código.
3. **Espacio de nombres (``std``):** Se usa para evitar conflictos de nombres en las funciones estándar (como ``cout``). Se antepone ``std::`` o se declara ``using namespace std;``.
4. **Retorno (``return 0;``):** Indica al sistema operativo que el programa terminó de ejecutarse correctamente sin errores.

---

## Ejemplo Practico

- [Ejemplo Sintaxis](/01_fundamentos/01_Sintaxis/02_Ejemplo_Sintaxis.cpp)

---

[Inicio](#1-sintaxis-básica)

---

[Tabla de contenido principal](/Tabla_Contenido.md)

---
