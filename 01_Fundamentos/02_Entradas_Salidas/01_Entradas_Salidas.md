# 2. Entradas y Salidas de datos (I/O)

El **manejo de entradas y salidas** de datos no se realiza mediante funciones estándar como en otros lenguajes (por ejemplo, `printf` o `scanf` de C), sino mediante la noción de `streams` (flujos o corrientes de información).

Un `stream` funciona como un canal por el que los datos fluyen desde o hacia nuestro programa. Para utilizarlos, es necesario incluir la librería cabecera `iostream`*[Mas información](/02_Módulos_Librerías/02_Librerias_Estandar/01_Librerias.md#modulo-iostream)*.

---

## Tabla de Contenido

- [2. Entradas y Salidas de datos (I/O)](#2-entradas-y-salidas-de-datos-io)
  - [Tabla de Contenido](#tabla-de-contenido)
  - [Salida de Datos](#salida-de-datos)
    - [Manipuladores de Formato](#manipuladores-de-formato)
  - [Entrada de Datos](#entrada-de-datos)
    - [Lectura de Cadenas de Texto con Espacios](#lectura-de-cadenas-de-texto-con-espacios)
  - [Ejemplo Practico](#ejemplo-practico)

---

## Salida de Datos

El objeto `cout` proporciona varios métodos para imprimir la salida en la consola.
Aquí están algunos de los métodos de `cout` más utilizados:

- `<<`: Imprime una cadena en la consola. **No añade** un carácter de nueva línea al final, por lo que la salida posterior continuará en la misma línea.
- `endl` o `\n`: Se utiliza para **añadir un salto de línea** en la salida. Sin estos, toda la salida aparecerá en la misma línea.
- `\t`: Agrega una **tabulación** (un espacio grande como de cuatro espacios).
- ***Sintaxis:***

     ```cpp
     cout << "Texto o variable" << endl;
     cout << "Texto o variable" << "\n";
     cout << "Texto o variable" << "\t" << "Texto o variable";
     ```

### Manipuladores de Formato

Puedes alterar la forma en que se muestran los datos en la salida usando manipuladores (**requieren la librería `iomanip`** *[Mas información](/02_Módulos_Librerías/02_Librerias_Estandar/01_Librerias.md#modulo-iomanip)*):

- `dec, oct, hex`: Cambian la base numérica de los enteros a decimal, octal o hexadecimal.
- `setw(n)`: Define el ancho mínimo del campo en $n$ caracteres.
- `setprecision(n)`: Ajusta la cantidad de dígitos de precisión para números reales/decimales.

---

## Entrada de Datos

El objeto `cin` utiliza el operador de extracción `>>` ("extraer de") para obtener datos introducidos por el usuario desde el teclado y guardarlos en una variable.

***Sintaxis***

```cpp
cin >> nombre_variable;
```

### Lectura de Cadenas de Texto con Espacios

Cuando usas `cin >> variable_string;`, la lectura se detiene al encontrar el primer espacio en blanco, tabulación o salto de línea. Para leer frases completas con espacios, se utilizan funciones de lectura de líneas como `getline()`

***Sintaxis***

```cpp
getline(cin, variable_string);
```

---

## Ejemplo Practico

1. [Salida de Datos](/01_Fundamentos/02_Entradas_Salidas/02_Salida_Datos.cpp)
2. [Entrada de Datos](/01_Fundamentos/02_Entradas_Salidas/03_Entrada_Dator.cpp)

---

[Inicio](#2-entradas-y-salidas-de-datos-io)

---

[Tabla de contenido principal](/Tabla_Contenido.md)

---
