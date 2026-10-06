# 2. Librerías Estándar
<!--markdownlint-disable MD033 -->
La biblioteca estándar de C++ ofrece una amplia gama de módulos con funciones y clases útiles.

---

## Tabla de contenido

- [2. Librerías Estándar](#2-librerías-estándar)
  - [Tabla de contenido](#tabla-de-contenido)
  - [Modulo `iostream`](#modulo-iostream)
    - [¿Qué incluye `iostream`?](#qué-incluye-iostream)
  - [Modulo `string`](#modulo-string)
    - [¿Que contiene `string`?](#que-contiene-string)
  - [Modulo `cmath`](#modulo-cmath)
    - [Funciones más comunes de ``cmath``](#funciones-más-comunes-de-cmath)
  - [Modulo `iomanip`](#modulo-iomanip)
    - [Manipuladores Principales de `iomanip`](#manipuladores-principales-de-iomanip)
  - [Ejemplo Practico](#ejemplo-practico)

---

## Modulo `iostream`

Es la cabecera estándar de **Entrada/Salida (I/O)** de C++. Su nombre proviene de *I/O Stream (Input/Output Stream, flujo de entrada y salida)*. Proporciona los objetos necesarios para un programa pueda comunicarse con el exterior, permitiendo mostrar información en la pantalla y recibir datos ingresados desde el teclado.

### ¿Qué incluye `iostream`?

Al incluir esta cabecera mediante `#include <iostream>`, se declaran automáticamente los principales objetos de flujo *(streams)* estándar:

| Objeto | Propósito | Descripción |
| :---: | :--- | :--- |
| `cout` | Salida estándar *[Mas información](/01_Fundamentos/02_Entradas_Salidas/01_Entradas_Salidas.md#salida-de-datos)* | Envía datos para mostrar en la pantalla. |
| `cin` | Entrada estándar *[Mas información](/01_Fundamentos/02_Entradas_Salidas/01_Entradas_Salidas.md#entrada-de-datos)* | Recibe datos ingresados por el usuario desde el teclado. |
| `cerr` | Salida de errores | Imprime mensajes de error en pantalla sin usar búfer (de forma inmediata). |
| `clog` | Registro de eventos | Salida de errores o registros (logs) gestionada con búfer. |
| <ul><li>`left`</li><li>`right`</li></ul> | Alinea la salida | Modificadores de alineación de texto a la izquierda o derecha. |
| `fixed` | Modificador de números flotantes. | Modificador para forzar la notación decimal fija. |

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
  | <ul><li>`length()`</li><li>`size()`</li></ul> | Devuelve el número de caracteres del texto. | `texto.length()` |
  | `empty()` | Devuelve true si la cadena está vacía (""). | `if (texto.empty())` |
  | `compare()` | Compara dos cadenas o sub-cadenas alfabéticamente. | `texto1.compare(texto2)` |
  | `substr(pos, len)` | Extrae una parte del texto. | `texto.substr(0, 4)` |
  | `find("texto")` | Busca la posición donde aparece una palabra o carácter. | `texto.find("hola")` |
  | `clear()` | Borra todo el contenido de la variable. | `texto.clear()` |
  | `getline()` | Función para leer líneas completas con espacios. | *[Mas información](/01_Fundamentos/02_Entradas_Salidas/01_Entradas_Salidas.md#lectura-de-cadenas-de-texto-con-espacios)* |

---

## Modulo `cmath`

La cabecera proporciona funciones matemáticas avanzadas (como potencias, raíces cuadradas, trigonometría y redondeos). **Sustituye** a la antigua librería ``math.h`` de C para integrarse correctamente con el sistema de tipos y espacios de nombres ``(std)`` de C++.

### Funciones más comunes de ``cmath``

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

## Modulo `iomanip`

`iomanip` (abreviatura de *Input/Output Manipulators*, o *manipuladores de entrada y salida*) es una librería estándar de C++ que proporciona herramientas para formatear cómo se muestra la información en pantalla (o en archivos).
Mientras que `iostream` maneja el flujo básico de los datos, `iomanip` permite personalizar aspectos como la cantidad de decimales, el ancho de los campos de texto, el alineamiento y los caracteres de relleno.

### Manipuladores Principales de `iomanip`

| Manipulador | Descripción | Ejemplo de uso |
| :---: | :--- | :---: |
| `setprecision(n)` | Define la cantidad de dígitos o decimales con los que se mostrará un número real.*(contando tanto la parte entera como la decimal)* | `cout << setprecision(4) << 3.14159;` |
| `setw(n)` | Establece la anchura mínima del campo (en número de caracteres) para el siguiente dato. | `cout << setw(10) << "Hola";` |
| `setfill(c)` | Define el carácter **c** usado para rellenar los espacios vacíos dejados por `setw`. | `cout << setfill('0') << setw(5) << 42;` |
| `setbase(b)` | Cambia la base numérica de los enteros a $b$ (admite 8, 10 o 16). | `cout << setbase(16) << 255;` |
| <ul><li>`setiosflags(...)`</li><li>`resetiosflags(...)`</li></ul> | Activa o desactiva configuraciones de formato del flujo (como la notación científica). | `cout << setiosflags(ios::fixed);` |

---

## Ejemplo Practico

1. [Modulo iostream](/02_Módulos_Librerías/02_Librerias_Estandar/02_Modulo_iostream.cpp)
2. [Modulo string](/02_Módulos_Librerías/02_Librerias_Estandar/03_Modulo_string.cpp)
3. [Modulo cmath](/02_Módulos_Librerías/02_Librerias_Estandar/04_Modulo_cmath.cpp)
4. [Modulo iomanip](/02_Módulos_Librerías/02_Librerias_Estandar/05_Modulo_iomanip.cpp)

---

[Inicio](#2-librerías-estándar)

---

[Tabla de contenido principal](/Tabla_Contenido.md)

---
