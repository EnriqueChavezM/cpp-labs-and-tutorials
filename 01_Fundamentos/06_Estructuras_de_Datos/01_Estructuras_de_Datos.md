# 6. Estructuras de Datos

---

## Tabla de Contenido

- [6. Estructuras de Datos](#6-estructuras-de-datos)
  - [Tabla de Contenido](#tabla-de-contenido)
  - [Arrays](#arrays)
    - [Tipos de Arrays](#tipos-de-arrays)
    - [Acceso a elementos](#acceso-a-elementos)
      - [Iterar Arrays](#iterar-arrays)
    - [Modificación de elementos](#modificación-de-elementos)
    - [Operaciones comunes con Arrays](#operaciones-comunes-con-arrays)
  - [Ejemplo Practico](#ejemplo-practico)

---

## Arrays

Un array **(también llamado vector o arreglo)** es una colección de elementos y puede contener valores del mismo tipo, como números, cadenas o incluso otros arreglos. Los arreglos se crean usando corchetes `[]`, y los elementos dentro del arreglo se separan con *comas*.

***Sintaxis***

```cpp
tipo_de_dato Nombre_array[tamaño]; // Sintaxis Array Estático
```

> [!NOTE]
> Los índices de los arrays siempre empiezan a contar desde el 0. Si un array tiene un tamaño de 5 elementos, sus posiciones válidas van desde 0 hasta 4 (n-1).
> Los arrays no se pueden pasar directamente a las funciones como arrays completos. Cuando intentas pasar un array a una función, este **"decae"** en un puntero a su primer elemento.
> Además, no es posible devolver un array en una función

### Tipos de Arrays

Los arrays se pueden clasificar principalmente según su dimensionalidad (*la cantidad de dimensiones que poseen*) y la forma en que se gestiona su memoria (*estáticos o dinámicos*).

1. **Arrays Unidimensionales (1D):** Son los más sencillos y comunes. Funcionan como una lista lineal de elementos almacenados en posiciones de memoria contiguas.

   - Ejemplo de declaración con tamaño explícito y valores:

     ```cpp
     int numbers[5] = {1, 2, 3, 4, 5};
     ```

   - Ejemplo con tamaño implícito:

     ```cpp
     int numbers[] = {1, 2, 3, 4, 5}; // El compilador deduce que el tamaño es 5
     ```

2. **Arrays Multidimensionales (Matrices o Tablas):** Tienen más de una dimensión. Los más utilizados son los bidimensionales (filas y columnas), útiles para representar tableros, cuadrículas o matrices matemáticas.

    - **Array Bidimensional (2D):**

     ```cpp
     // Una matriz de 3 filas y 4 columnas
     int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
     };
     ```

    > [!NOTE]
    > Array Tridimensional (3D) o superior:* Puedes añadir tantas dimensiones como necesites (por ejemplo, `int cubo[2][3][4];`), aunque su uso es menos frecuente y requiere bucles anidados complejos para recorrerlos.

3. **Arrays Estáticos vs. Dinámicos**

    - **Arrays Estáticos (de tamaño fijo):** Su tamaño se define en tiempo de compilación y **no puede cambiar durante la ejecución** del programa.Se almacenan en la memoria stack (pila).
    - **Arrays Dinámicos (tamaño en tiempo de ejecución):** Permiten definir el tamaño que tendrán mientras el programa ya está corriendo (por ejemplo, pidiéndole un número al usuario).

    > [!NOTE]
    > En C++ moderno, la forma más segura y recomendada de manejar esto es usando `std::vector` (de la librería `vector`), el cual redimensiona su tamaño automáticamente

     ```cpp
     #include <vector>
     std::vector<int> dynamicNumbers = {1, 2, 3};
     dynamicNumbers.push_back(4); // Añade un elemento dinámicamente
     ```

### Acceso a elementos

Cada valor en un array se llama elemento, y cada elemento tiene un índice. Los índices comienzan desde 0 hasta la longitud del arreglo menos uno (**n-1**). Para acceder a un elemento de un array, podemos usar su índice dentro de corchetes.

- **Ejemplo:**

 ```cpp
 char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
 std::cout << letters[0] << std::endl; // Imprime  a 
 std::cout << letters[1] << std::endl; // Imprime  b 
 std::cout << letters[4] << std::endl; // Imprime  e 
 std::cout << letters[6] << std::endl; // Imprime  g 
 ```

#### Iterar Arrays

Para iterar sobre un array se utiliza la función `std::size` que devuelve la longitud de la lista.

- **Ejemplo**
  
  ```cpp
  for (int i = 0; i < std::size(Nombre_Array); i++) {
        std::cout << Nombre_Array[i] << std::endl;
    }
  ```

> [!TIP]
> Un bucle `for-each`, proporciona una forma más sencilla de iterar por un array, cuando necesitas acceder a cada elemento de un array sin modificar el propio array. **[Mas Información](/01_Fundamentos/05_Estructuras_de_Control/01_Estructuras_de_Control.md#bucle-for-mejorado)**

### Modificación de elementos

Para modificar un elemento específico de un arreglo, puedes asignarle un nuevo valor usando su índice.

- **Ejemplo:**

 ```cpp
 std::string my_array[] = {"apple", "banana", "cherry"};
 my_array[1] = "orange";
 std::cout << my_array[0] << ", " << my_array[1] << ", " << my_array[2] << std::endl;
 //Salida: apple, orange, cherry
 //banana se cambió por una orange
 ```

### Operaciones comunes con Arrays

Algunas operaciones comunes con arreglos son:

- **Encuentra la suma de todos los elementos de un arreglo:**
  
  **Ejemplo:**

  ```cpp
  int numbers[] = {1, 2, 3, 4, 5};
  int sum = 0;
  for (int number : numbers) {
     sum += number;
  }
  std::cout << "Sum: " << sum;
  ```

- **Encuentra el promedio de los elementos de un array:**
  
  **Ejemplo:**

  ```cpp
  int numbers[] = {1, 2, 3, 4, 5};
  double sum = 0;
  for (int number : numbers) {
      sum += number;
  }
  double average = sum / std::size(numbers);
  std::cout << "Average: " << average;
  ```

- **Encuentra el elemento máximo de un array:**  
  
  **Ejemplo:**

  ```cpp
  int numbers[] = {1, 5, 2, 9, 3};
  int max = numbers[0];
  for (int i = 1; i < std::size(numbers); i++) {
      if (numbers[i] > max) {
         max = numbers[i];
      }
  }
  std::cout << "Max: " << max;
  ```

- **Encuentra el elemento mínimo de un arreglo:**

  **Ejemplo:**

  ```cpp
  int numbers[] = {1, 5, 2, 9, 3};
  int min = numbers[0];
  for (int i = 1; i < std::size(numbers); i++) {
      if (numbers[i] < min) {
          min = numbers[i];
      }
  }
  std::cout << "Min: " << min;
  ```

---

## Ejemplo Practico

1. [Arrays](/01_Fundamentos/06_Estructuras_de_Datos/02_Arrays.cpp)
   1. [Acceso a elementos de array](/01_Fundamentos/06_Estructuras_de_Datos/03_Acceso_Elementos_Array.cpp)
   2. [Modificación de elementos](/01_Fundamentos/06_Estructuras_de_Datos/04_Modificar_elementos.cpp)
   3. [Operaciones comunes con Arrays](/01_Fundamentos/06_Estructuras_de_Datos/05_Operaciones_Comunes_Arrays.cpp)

---

[Inicio](#6-estructuras-de-datos)

---

[Tabla de contenido principal](/Tabla_Contenido.md)

---
