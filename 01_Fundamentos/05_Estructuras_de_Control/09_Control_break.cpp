/**************************************************************************************************
 * 
 * Ejemplo:
 * └─ Escribe un código que imprime los números del 1 al 20 (inclusive).
 *      └─ Añade una sentencias if y break para que solo se impriman los números del 1 al 15, el bucle terminará antes de imprimir los números del 16 al 20.
 * 
**************************************************************************************************/
#include <iostream>

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i == 16){ break; }
        std::cout << i << std::endl;
        //if (i == 15){ break; } Opción 2 mismo resultado
    }
    return 0;
}