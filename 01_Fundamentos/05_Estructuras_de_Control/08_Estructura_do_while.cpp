/**************************************************************************************************
 * 
 * Ejemplo:
 * └─ Escribe un programa que utilice un bucle do-while para hacer lo siguiente:
 *      ├─ Inicializa una variable sum en 0.
 *      ├─ Inicializa una variable number en 1.
 *      ├─ En cada iteración, suma number a sum.
 *      ├─ Incrementa number en 2 en cada iteración (es decir, 1, 3, 5, ...).
 *      ├─ Imprime number y sum:
 *      │   ├─ Sum is: [The sum value]
 *      │   └─ Num is: [The number value]
 *      ├─ Continúa el bucle mientras number sea menor o igual a 50.
 *      └─ Imprime el valor final de sum después de que termine el bucle: Final Sum: [The final sum value]
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    // Inicializar variables
    int sum = 0;
    int number = 1;

    // Ciclo
    do{
        // Cálculos
        sum += number;
        number += 2;

        // Imprimir resultado
        std :: cout << "Sum is: " << sum << std::endl;
        std :: cout << "Num is: " << number << std::endl;

    }while (number <= 50);   

    // Imprimir la suma final
    std::cout << "Final Sum: " << sum << std::endl;
    return 0;
}