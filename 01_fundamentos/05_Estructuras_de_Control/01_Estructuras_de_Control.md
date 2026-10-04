# 5. Estructuras de Control

Nos permite controlar el flujo de ejecución de un programa.

---

## Tabla de Contenido

- [5. Estructuras de Control](#5-estructuras-de-control)
  - [Tabla de Contenido](#tabla-de-contenido)
  - [Estructuras Condicionales](#estructuras-condicionales)
    - [Estructura `if`](#estructura-if)
    - [Estructura `if-else`](#estructura-if-else)
    - [Estructura `if-else if-else`](#estructura-if-else-if-else)
    - [Condicionales anidados](#condicionales-anidados)
  - [Ejemplo Practico](#ejemplo-practico)

---

## Estructuras Condicionales

Permite ejecutar diferentes bloques de código según se  cumpla o no una determinada condición.

### Estructura `if`

Su función es realizar o no una determinada acción o sentencia, basándose en el resultado de la evaluación de una expresión booleana **(verdadero o falso)**.

***Sintaxis***

```cpp
if (Condición){
    # Bloque de código a ejecutar si la condición es verdad
}
```

**Diagrama de flujo:**

```mermaid
---
title: Estructura if
---
graph TD
    A([Inicio]) --> B{if (Condición)}
    B -- Sí --> C[Acción a Realizar si la condición es verdad]
    B -- No --> D([Fin])
    C --> D
```

### Estructura `if-else`

La estructura selectiva doble ``if - else`` permite toma de decisión. Si la condición es **verdadera**, entonces se sigue por un camino específico y se ejecuta una acción determinada. Por otra parte, si el resultado de la evaluación es **falso**, entonces se sigue por otro camino y se realiza otra acción. En ambos casos, luego de ejecutar las acciones correspondientes, se continúa con la secuencia normal del diagrama de flujo.

***Sintaxis***

```python
if (Condición){
    # Bloque de código a ejecutar si la condición es verdad
}
else{
    # Bloque de código a ejecutar si la condición es falsa
    }
```

**Diagrama de flujo:**

```mermaid
---
title: Estructura if - else
---
graph TD
    A([Inicio]) --> B{if (Condición)}
    B -- Sí --> C[Acción a Realizar]
    B -- No --> D[Acción a Realizar]
    C --> E([Fin])
    D --> E
```

### Estructura `if-else if-else`

Permite establecer una serie de condiciones al interior del programa, que ayuda a determinar qué acciones llevar a cabo dadas ciertas circunstancias. La sentencia ``else if`` se usa cuando deseamos evaluar múltiples condiciones.

***Sintaxis***

```python
if (Condición){
    # Bloque de código a ejecutar si la condición es verdad
}
elif (Condición){
    # Bloque de código a ejecutar si if es falso y la condición es verdad
}
else{
    # Bloque de código a ejecutar si todas las condiciones son falsa
}
```

**Diagrama de flujo:**

```mermaid
---
title: Estructura if - else if - else
---
graph TD
    A([Inicio]) --> B{if (Condición)}
    B -- Sí --> C[Acción a Realizar]
    B -- No --> D{elif (Condición)}
    D -- Sí --> E[Acción a Realizar]
    D -- No --> F[Acción a Realizar]
    C --> G([Fin])
    E --> G
    F --> G
```

### Condicionales anidados

Las instrucciones anidadas `if-else if-else` permiten tomar decisiones jerárquicas. El anidamiento puede ser infinito, lo que permite crear árboles de decisión complejos.

***Sintaxis***

```python
if (Condición1){
    if (Condición2){
        # Código para cuando ambas condiciones son verdaderas
    }
    else {       
        # Código para cuando Condición 2 es verdadera pero condition2 es falsa
    }
}
else {
    # Código para cuando Condición 1 es falsa
}
```

---

## Ejemplo Practico

1. [Estructura `if`](/01_fundamentos/05_Estructuras_de_Control/02_Estructura_if.cpp)
2. [Estructura `if - else if - else`](/01_fundamentos/05_Estructuras_de_Control/03_Estructura_if_elseif-else.cpp)

---

[Inicio](#5-estructuras-de-control)

---

[Tabla de contenido principal](/Tabla_Contenido.md)

---
