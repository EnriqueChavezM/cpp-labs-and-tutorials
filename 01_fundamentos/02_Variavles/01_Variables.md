# 2. Variables

Las variables son contenedores que almacenan valores de datos. Se utilizan para guardar, manipular y mostrar información dentro de un programa.

---

## Tabla de Contenido

- [2. Variables](#2-variables)
  - [Tabla de Contenido](#tabla-de-contenido)
  - [Alcance de Variables (Local vs Global)](#alcance-de-variables-local-vs-global)
  - [Declaración de variables](#declaración-de-variables)
  - [Tipo de  Variables](#tipo-de--variables)

---

## Alcance de Variables (Local vs Global)

Las variables definidas dentro de una función tienen un alcance local, lo que significa que solo son accesibles dentro de la función. Por otro lado, las variables definidas fuera de cualquier función tienen un alcance global y pueden ser accedidas desde cualquier parte del programa.

---

## Declaración de variables

Declarar una variable **implica especificar su tipo y darle un nombre**.
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

---

## Tipo de  Variables
