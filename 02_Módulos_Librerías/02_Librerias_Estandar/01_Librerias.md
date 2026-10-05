# 2. Librerías Estándar

La biblioteca estándar de C++ ofrece una amplia gama de módulos con funciones y clases útiles.

---

## Tabla de contenido

- [2. Librerías Estándar](#2-librerías-estándar)
  - [Tabla de contenido](#tabla-de-contenido)
  - [Modulo `string`](#modulo-string)
    - [¿Que contiene `string`?](#que-contiene-string)
  - [Modulo `cmath`](#modulo-cmath)
    - [Funciones más comunes de ``cmath``](#funciones-más-comunes-de-cmath)
  - [Ejemplo Practico](#ejemplo-practico)

---

## Modulo `string`

Es la librería estándar que proporciona la clase ``std::string``, la cual se utiliza para crear, manipular y gestionar cadenas de texto de forma dinámica y segura.

### ¿Que contiene `string`?

Incluir ``#include <string>`` en el código da acceso a:

1. **El tipo de dato ``std::string``:** Te permite declarar variables para almacenar texto.
2. **Operadores sobrecargados:**
   1. **Unión/Concatenación (+, +=):** `string resultado = "Hola " + "Mundo";`
   2. **Comparación (==, !=, <, >):** `if (texto1 == texto2)`
   3. **Acceso a caracteres ([]):** `char primeraLetra = texto[0];`
3. **Métodos miembros útiles:**

  | Método | ¿Qué hace? | Ejemplo |
  | :---: | :--- | :---: |
  | `length() / size()` | Devuelve el número de caracteres del texto. | `texto.length()` |
  | `empty()` | Devuelve true si la cadena está vacía (""). | `if (texto.empty())` |
  | `compare()` | Compara dos cadenas o sub-cadenas alfabéticamente. | `texto1.compare(texto2)` |
  | `substr(pos, len)` | Extrae una parte del texto. | `texto.substr(0, 4)` |
  | `find("texto")` | Busca la posición donde aparece una palabra o carácter. | `texto.find("hola")` |
  | `clear()` | Borra todo el contenido de la variable. | `texto.clear()` |

---

## Modulo `cmath`

La cabecera proporciona funciones matemáticas avanzadas (como potencias, raíces cuadradas, trigonometría y redondeos). **Sustituye** a la antigua librería ``math.h`` de C para integrarse correctamente con el sistema de tipos y espacios de nombres ``(std)`` de C++.

### Funciones más comunes de ``cmath``
<!--markdownlint-disable MD033 -->
| Sintaxis | Descripción |
| :---: | :--- |
| `fmod(a,b)` | Calcula el modulo para números de punto flotante (**a % b**) |
| `sqrt(x)` | Calcula la raíz cuadrada de **x**. |
| `pow(b, e)` | Eleva la base **b** al exponente **e** ($b^e$). |
| `abs(x)` | Devuelve el valor absoluto de **x**. |
| `round(x)` | Redondea al entero más cercano. |
| `floor(x)` | Redondea hacia abajo (entero inferior). |
| `ceil(x)` | Redondea hacia arriba (entero superior). |
| <ul><li>`sin(x)`</li><li>`cos(x)`</li></ul> | Funciones trigonométricas (en radianes). |

---

## Ejemplo Practico

1. [Modulo string](/02_Módulos_Librerías/02_Librerias_Estandar/02_Modulo_string.cpp)
2. [Modulo cmath](/02_Módulos_Librerías/02_Librerias_Estandar/03_Modulo_cmath.cpp)

---

[Inicio](#2-librerías-estándar)

---

[Tabla de contenido principal](/Tabla_Contenido.md)

---
