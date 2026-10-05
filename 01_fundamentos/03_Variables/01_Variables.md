# 3. Variables

Las variables son contenedores que almacenan valores de datos. Se utilizan para guardar, manipular y mostrar información dentro de un programa.

---

## Tabla de Contenido

- [3. Variables](#3-variables)
  - [Tabla de Contenido](#tabla-de-contenido)
  - [Alcance de Variables (Local vs Global)](#alcance-de-variables-local-vs-global)
  - [Declaración de variables](#declaración-de-variables)
    - [Convenciones de nomenclatura](#convenciones-de-nomenclatura)
  - [Variables Simples](#variables-simples)
    - [Números Enteros](#números-enteros)
    - [Números Reales](#números-reales)
    - [Char](#char)
    - [String](#string)
    - [Boolean](#boolean)
  - [Modificador de Tipo](#modificador-de-tipo)
    - [Constantes](#constantes)
  - [Conversión de tipos (Casting)](#conversión-de-tipos-casting)
  - [Ejemplo Practico](#ejemplo-practico)

---

## Alcance de Variables (Local vs Global)

Las variables definidas dentro de una función tienen un alcance local, lo que significa que solo son accesibles dentro de la función. Por otro lado, las variables definidas fuera de cualquier función tienen un alcance global y pueden ser accedidas desde cualquier parte del programa.

---

## Declaración de variables

Declarar una variable **implica especificar su tipo y darle un nombre**. Asignar un valor a una variable es darle un valor inicial o modificar su valor existente. **C++ no inicializa automáticamente las variables con valores por defecto**. Las variables no inicializadas *contienen basura binaria* (un valor aleatorio) hasta que se les asigna un valor explícitamente.
La sintaxis básica para declarar una variable es:

```cpp
tipo nombre = valor;
```

- `tipo`: Especifica el tipo de datos de la variable.
- `nombre`: Es el nombre único que se le da a la  variable.
- `valor`:  Valor inicial que se le asigna a la variable *(Opcional)*

**Ejemplo:**

```cpp
int edad;
```

> [!NOTA]
> Una vez que se declara una variable con un tipo determinado, solo puede contener valores de ese tipo.
> **Por ejemplo**, una variable ``int`` solo puede contener valores enteros, y una variable ``std::string`` solo puede contener texto.

También puedes declarar múltiples variables del mismo tipo en una sola línea:

**Ejemplo:**

```cpp
int a, b, c;
```

En C++ moderno, las variables también se pueden inicializar mediante la inicialización con llaves o la inicialización mediante constructor:

**Ejemplo:**

```cpp
int num{0};   // inicialización con llaves
int num(0);   // inicialización por constructor
```

C++ también proporciona la palabra clave ``auto``, que permite al compilador deducir automáticamente el tipo de una variable a partir del valor que se le asigna:

**Ejemplo:**

```cpp
auto score = 10;    // deducido como int
auto price = 9.99;  // deducido como double
```

### Convenciones de nomenclatura

En programación, es importante seguir las convenciones de nomenclatura para mantener tu código legible y fácil de mantener. Sin embargo, hay algunas reglas y convenciones que debes seguir al nombrar elementos en C++:

1. Los nombres pueden contener letras, dígitos y guiones bajos.
2. Los nombres deben comenzar con una letra o un guion bajo.
3. Los nombres distinguen entre mayúsculas y minúsculas (``myVariable`` y ``myvariable`` son diferentes).
4. Los nombres no pueden ser palabras clave de C++ (como ``int``, `float`, `if`, etc.).

Además de estas reglas, existen algunas convenciones comunes de nomenclatura que los desarrolladores usan para hacer que su código sea más coherente y legible:

1. **camelCase:** las palabras se unen, y cada palabra después de la primera comienza con una letra mayúscula (por ejemplo, `totalAmount`, `numberOfStudents`). Se usa comúnmente para *nombres de variables y funciones* en C++.
2. **PascalCase:** es similar a camelCase, pero la primera palabra también comienza con una letra mayúscula (por ejemplo, ``TotalAmount``, `MyClass`). Se usa comúnmente para *nombres de clases* en C++.
3. **snake_case:** las palabras están todas en minúsculas y separadas por guiones bajos (por ejemplo, ``total_amount``, ``number_of_students``). Se usa a menudo en C++ para *nombres de archivos*.
4. **SCREAMING_SNAKE_CASE:** como snake_case, pero todo está en mayúsculas (por ejemplo, ``MAX_SIZE``, ``TOTAL_AMOUNT``). Normalmente se usa para *nombrar constantes y macros* en C++.
5. Sé descriptivo y evita los nombres demasiado cortos (por ejemplo, ``numberOfStudents`` es mejor que ``n``).
6. Evita usar nombres de variables de una sola letra, excepto para contadores simples (por ejemplo, ``i``, `j`, `k`).

---

## Variables Simples

Los tipos elementales definidos en **C++** son:

- **char, short, int, long,** que representan enteros de distintos tamaños *(los caracteres son enteros de 8 bits)*
- **float, double y long double,** que representan números reales (en coma flotante)

### Números Enteros

Los **números enteros** suelen representarse utilizando el tipo de datos ``int``.

``int`` se utiliza para almacenar números enteros sin ningún punto decimal.

**Ejemplo:**

```cpp
int age = 30;
int temperature = -5;
int count = 100;
```

### Números Reales

Los *números reales* suelen representarse mediante dos tipos de datos principales: ``float`` y ``double``.

- ``float`` se utiliza para almacenar números con un punto decimal.

  **Ejemplo:**

  ```cpp
  float price = 99.99f;
  ```

  > [!NOTA]
  > La ``f`` (o 'F') al final de un número decimal se denomina sufijo literal y le indica explícitamente al compilador que este número debe tratarse como un ``float``.

- ``double`` se utiliza para almacenar números con un punto decimal, pero **con doble precisión**. ``float`` normalmente tiene 7 dígitos decimales de precisión, mientras que double normalmente tiene entre 15 y 17 dígitos decimales de precisión.
  **Ejemplo:**

  ```cpp
  double d = 3.14159265359;
  ```

### Char

Un **char** es un solo carácter (Por ejemplo: 1, 6, %, b, p, ., T, etc.)

El tipo **char** es un tipo especial que consiste en un solo carácter.

Para inicializar un valor **char** en una variable, se encierra entre comillas simples:

```cpp
char c1 = 'h';
```

En el ejemplo anterior, se inicializa una variable **char** llamada ``c1``.

### String

El tipo **string** es una secuencia de caracteres que puede contener varios caracteres.

Para usar cadenas, debes incluir la directiva en la parte superior del código:

```cpp
#include <string>
```

> [!NOTA]
> Aunque el código podría funcionar sin ``#include <string>`` **(porque otros encabezados como ``<iostream>`` podrían incluirlo indirectamente)**, se considera una mala práctica depender de inclusiones indirectas. **Incluye siempre explícitamente** los encabezados que uses directamente en tu código.

También es necesitas gestionar el espacio de nombres de una de estas dos maneras:

1. Añade después de los includes:
  
   ```cpp
   using namespace std;
   ```

2. No añadir la línea ``using namespace``, pero antepone ``std::`` a string:

   ```cpp
   std::string s1 = "This is a string";
   // Esto funciona porque usamos explícitamente std::
   ```

> [!NOTA]
> Las variables de cadena utiliza comillas dobles.
> Ambos métodos requieren ``#include <string>``. La única diferencia es si quieres escribir 'std::' antes de 'string' o no.

### Boolean

El tipo **booleano** solo tiene *2 valores* posibles: ``true`` o ``false``.

Para asignar un valor booleano a una variable, usa la palabra clave ``bool`` seguida del nombre de la variable:

**Ejemplo:**

```cpp
bool variable_true = true;
bool variable_false = false;
```

En el ejemplo anterior, dos variables booleanas llamadas ``variable_true`` y ``variable_false`` se inicializan con los valores ``true`` y ``false``, respectivamente. Al imprimir un valor booleano usando ``cout``, ``true`` se muestra como **1** y ``false`` se muestra como **0**.

---

## Modificador de Tipo

### Constantes

Una constante es un tipo especial de variable que **no puede cambiarse una vez que se inicializa**.

Para declarar una constante, usa la palabra clave ``const`` seguida del tipo de variable:

**Ejemplo:**

```cpp
const int maxValue = 100;
```

En el ejemplo anterior, una constante llamada ``maxValue`` se inicializa con el valor **100**.
Si intentamos cambiar un valor constante:

```cpp
const int maxValue = 100;
maxValue = 200; // Esto causará un error
```

Se producirá un error porque los valores constantes no se pueden cambiar.

En C++, es una convención común nombrar las constantes usando ``ALL_CAPS`` (letras mayúsculas con guiones bajos entre las palabras):

```cpp
const int MAX_VALUE = 100;
const double PI = 3.14159;
```

Esto facilita distinguir las constantes de las variables normales.

---

## Conversión de tipos (Casting)

La conversión de tipos es el proceso de convertir un valor de un tipo de datos a otro.

En C++, podemos convertir enteros en números de doble precisión, números de doble precisión en enteros y mucho más.
Hay dos tipos de conversión de tipos:

1. **Conversión implícita Entero a doble (automática):**

   ```cpp
   int number = 5;
   double decimal = number; // se convierte automáticamente en 5.0
   // con cálculo
   int x = 7;
   double result = x / 2.0; // el resultado es 3.5
   ```

   > [!NOTA]
   > Al dividir dos valores int, C++ realiza una división entera: se descarta la parte decimal (Por ejemplo, 7 / 2 da como resultado 3, no 3.5).
   > Para obtener un resultado decimal, *al menos un operando debe ser un double* (por ejemplo, 7 / 2.0 da como resultado 3.5).

2. **Conversión explícita (manual):**
   - *Entero a Numero real `(int)decimal`:*

     ```cpp
     double decimal = 9.7;
     int number = (int) decimal;  // se convierte en 9 (la parte decimal se trunca)
     // con cálculo
     double price = 19.99;
     int roundedPrice = (int) price;  // se convierte en 19
     ```

   - *Números a Cadenas `to_String(Número)`:*

     ```cpp
     int number = 789;
     double number2 = 789.5;
     bool isValid = true;
     string text1 = to_string(number);  // se convierte en "789"
     string text2 = to_string(number2); // se convierte en "789.500000"
     string text2 = isValid ? "true" : "false";  // se convierte en "true"
     ```

     > [!NOTA]
     > Cuando conviertes un número ``double`` en una cadena usando ``to_string()``, de forma predeterminada **mostrará 6 decimales**, incluso si el número original no tiene tantos decimales.

   - *Cadena a Numero `stoi(Número Entero en Texto)` y `stod(Número Decimal en Texto)`:*

     ```cpp
     string numberText = "123";
     int number = stoi(numberText);  // se convierte en 123

     string decimalText = "45.67";
     double decimal = stod(decimalText);  // se convierte en 45.67
     ```

     > [!NOTA]
     > Al convertir cadenas en números, estas funciones leen tantos caracteres válidos **(Números)** como sea posible desde el inicio de la cadena. Solo generan un error si la cadena comienza con un carácter no válido **(Letras, Símbolos)**.

3. **Estilo preferido en C++ moderno:** En lugar de la conversión de estilo C ``(int) decimal``, es una práctica recomendada usar ``static_cast<>()``, ya que es más segura y expresa con mayor claridad tu intención:
   **Ejemplo:**

   ```cpp
   double decimal = 9.7;
   int number = static_cast<int>(decimal);  // se convierte en 9 (la parte decimal se trunca)
   double price = 19.99;
   int roundedPrice = static_cast<int>(price);  // se convierte en 19
   ```

   > [!NOTA]
   > Tanto ``(int) value`` como ``static_cast<int>(value)`` producen el mismo resultado aquí, pero ``static_cast<>()`` es el enfoque recomendado en C++ moderno, ya que hace que la conversión sea claramente visible y el compilador la comprueba.

---

## Ejemplo Practico

1. [Números Enteros](/01_Fundamentos/03_Variavles/02_Numeros_Enteros.cpp)
2. [Números Reales](/01_Fundamentos/03_Variavles/03_Numeros_Reales.cpp)
3. [Variables String](/01_Fundamentos/03_Variavles/04_Char_String.cpp)
4. [Variables Boolean](/01_Fundamentos/03_Variavles/05_Boolean.cpp)
5. [Variables Constantes](/01_Fundamentos/03_Variavles/06_Const.cpp)
6. [Casting de variables](/01_Fundamentos/03_Variables/07_Casting.cpp)

---

[Inicio](#3-variables)

---

[Tabla de contenido principal](/Tabla_Contenido.md)

---
