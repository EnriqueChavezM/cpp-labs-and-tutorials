# 1. Punteros y Referencias

---

## Tabla de Contenido

- [1. Punteros y Referencias](#1-punteros-y-referencias)
  - [Tabla de Contenido](#tabla-de-contenido)
  - [Punteros](#punteros)
    - [Conceptos Clave sobre Punteros](#conceptos-clave-sobre-punteros)
    - [Relación entre Punteros y Arrays](#relación-entre-punteros-y-arrays)
  - [Ejemplo Practico](#ejemplo-practico)

---

## Punteros

Un puntero es un **tipo especial de variable que almacena la dirección de memoria de otra variable**, en lugar de almacenar un valor directamente.

Cuando creas una variable regular como `int x = 42;`, la computadora almacena el valor *42* en una ubicación específica en la memoria. Un puntero a esta variable almacenaría la dirección de esa ubicación de memoria, permitiéndote acceder y manipular indirectamente la variable original.

### Conceptos Clave sobre Punteros

1. **Declaración:** Para declarar un puntero, se indica el *tipo de dato* al que va a apuntar seguido de un asterisco (`*`).  

    ```cpp
    int *pi;    // Puntero a un entero
    char *pc;   // Puntero a un carácter
    ```

    > [!WARMING]
    > El asterisco se asocia a la variable que se está declarando, no al tipo de dato. Si escribes `int *i, j;`, la variable `i` es un puntero a entero, pero `j` es un entero normal.

2. **Operador de Dirección (`&`):** Permite obtener la dirección de memoria de una variable existente.

    ```cpp
    int numero = 10;
    int *p = &numero; // 'p' guarda la dirección de memoria de la variable 'numero'
    ```

3. **Operador de Indirección (`*`):** Se utiliza para acceder o modificar el valor que se encuentra en la dirección de memoria a la que apunta el puntero (*también conocido como dereference o desreferenciación*).

    ```cpp
    int valor = *p; // 'valor' ahora toma el contenido de la dirección apuntada por p (es decir, 10)
    *p = 20;        // Modifica la variable 'numero' original a 20 a través del puntero
    ```

4. **El puntero NULL:** Un puntero puede recibir el valor `0` o `NULL` para indicar que no apunta a ninguna dirección válida. Cualquier intento de usar la indirección en un puntero `NULL` provocará un error de ejecución.

### Relación entre Punteros y Arrays

Los punteros y los vectores (*arrays*) están íntimamente relacionados. El nombre de un array actúa internamente como un puntero constante que apunta al primer elemento de la estructura.

**Ejemplo:**

```cpp
int v[5] = {10, 20, 30, 40, 50};
int *p = v; // El nombre del array equivale a la dirección de su primer elemento
```

Gracias a la aritmética de punteros, puedes recorrer un array sumando posiciones de memoria:

- `v[0]` es exactamente igual a `*v`.
- `v[2]` es equivalente a `*(v + 2)`.

---

## Ejemplo Practico

1. [Punteros](/03_Gestión_Memoria/01_Punteros_Referencias/02_Punteros.cpp)

---

[Inicio](#1-punteros-y-referencias)

---

[Tabla de contenido principal](/Tabla_Contenido.md)

---
