/**************************************************************************************************
 * 
 * Desafío:
 * ├─ Escribe un programa que encuentre todos los pares de números que sumen n utilizando números del 1 al n - 1.
 * ├─ El programa debe mostrar todas las combinaciones posibles, incluidos los pares duplicados en orden inverso. 
 * │    ├─ Por ejemplo:
 * │    └─ Se deben mostrar tanto "1 5" como "5 1", ya que se consideran disposiciones diferentes del mismo par. 
 * └─ Los números también pueden emparejarse consigo mismos si su suma es igual a n.
 *      ├─ Por ejemplo, si n = 6, la salida debe ser:
 *      ├─ 1 5
 *      ├─ 2 4
 *      ├─ 3 3
 *      ├─ 4 2
 *      ├─ 5 1
 *      └─ Porque:
 *          ├─ 1 + 5 = 6
 *          ├─ 2 + 4 = 6
 *          ├─ 3 + 3 = 6
 *          ├─ 4 + 2 = 6
 *          └─ 5 + 1 = 6
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    // Variable
    int n;

    // Leer entrada
    std::cout << "Ingrese un numero: ";
    std::cin >> n;

    // Ciclo primer dígito
    for(int i = 1; i < n; i++){

        // Ciclo segundo dígito
        for (int j = 1; j < n; j++){
            
            if (i + j == n){    
            
                std::cout << i << " " << j << std::endl;   
            
            } // Fin if
        } // Fin ciclo segundo dígito
    } // Fin ciclo primer dígito

    return 0;
} // Fin