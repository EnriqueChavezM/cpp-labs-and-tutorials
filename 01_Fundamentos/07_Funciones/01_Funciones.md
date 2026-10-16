# 7. Funciones

Una función es una secuencia de código que tiene un nombre. El propósito de una función es reutilizar una pieza de código varias veces. Las funciones nos ayudan a organizar nuestro código, evitar la repetición y hacer que nuestros programas sean más modulares y fáciles de mantener.

---

## Tabla de Contenido

- [7. Funciones](#7-funciones)
  - [Tabla de Contenido](#tabla-de-contenido)
  - [Declarar una función](#declarar-una-función)
    - [Parámetros](#parámetros)
  - [Ejemplo Practico](#ejemplo-practico)

---

## Declarar una función

Para declarar una función, utilizamos la siguiente sintaxis:

```cpp
Tipo_Retorno NombreFuncion (Parameters){
    //Código  
}

// Llamar a la función
NombreFuncion (Parameters);
```

> [!NOTE]
> ¡Importante! El código de la función debe ir antes de su llamada/ejecución

### Parámetros

Un argumento en una función es un valor que pasas a la función cuando la llamas. Para añadir argumentos a una función, los escribimos dentro de los paréntesis `()`. Podemos nombrar los argumentos como queramos y escribir tantos argumentos como necesitemos, siempre que los nombres sigan las reglas estándar para nombrar variables: deben comenzar con una letra o un guion bajo y solo pueden contener letras, dígitos y guiones bajos: no se permiten caracteres especiales como `/`, `&` o `!`.

***Sintaxis***

```cpp
Tipo_Retorno NombreFuncion (Tipo_Parametro_1 Nombre_1, ..., Tipo_Parametro_N Nombre_N){
    //Código  
}

// Llamar a la función
NombreFuncion (valor_1, ..., valor_n);
```

> [!WARMING]
> Pasar menos o más argumentos a una función que los declarados provocará que esta falle

---

## Ejemplo Practico

1. [Declarar una función](/01_Fundamentos/07_Funciones/02_Declarar_Función.cpp)
   1. [Parámetros](/01_Fundamentos/07_Funciones/03_Parametros.cpp)

---

[Inicio](#7-funciones)

---

[Tabla de contenido principal](/Tabla_Contenido.md)

---
