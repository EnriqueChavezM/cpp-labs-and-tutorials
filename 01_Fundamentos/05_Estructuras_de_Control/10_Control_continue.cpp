/**************************************************************************************************
 * 
 * Ejemplo:
 * └─ Escribe un código que imprime los números del 1 al 20 (inclusive).
 *      └─ Añade una sentencias if y continue para que solo se impriman los números pares.
 * 
**************************************************************************************************/
#include <iostream>

int main() {
    // Ciclo for
    for (int i = 1; i <= 20; i++) {

        // Condicional
        if (i % 2 != 0){ continue;}

        //Imprimir resultado
        std::cout << i << std::endl;
    }
    return 0;
}