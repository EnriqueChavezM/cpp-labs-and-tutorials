/**************************************************************************************************
 * 
 * Desafío:
 * ├─ Cada caso de prueba tiene una entrada: un número entero impar.
 * ├─ Tu tarea es imprimir una pirámide de n usando *. 
 * ├─ Aquí tienes algunos ejemplos:
 * │    ├─ Pirámide de 1
 * │    │   ├─ *
 * │    └─ Pirámide de 5
 * │        ├─ *
 * │        ├─ ***
 * │        └─ *****
 * └─ Entrada
 *      ├─ Un entero impar n del usuario
 *      └─ 1 <= n < 1000
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    /* Variables */
    int n;

    /* Leer entrada */
    std::cout << "Ingrese el tamaño de la pirámide: ";
    std::cin >> n;

    /* Bucle exterior repetir n veces */
    for (int i = 0 ; i <= n; i++){
        
        /* Si i es impar */
        if (i % 2 != 0){ 

            /*Bucle interior imprimir '*' i veces */
            for (int j = 0; j < i; j++){
                std::cout << "*";
            } 
            std::cout << "\n"; // salto de linea para siguiente nivel
        }
    }

    return 0;
}