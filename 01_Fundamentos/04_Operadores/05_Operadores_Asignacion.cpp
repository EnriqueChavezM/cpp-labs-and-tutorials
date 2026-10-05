/**************************************************************************************************
 * 
 * Ejemplo Operadores de Asignación
 *  Escribe un código que inicialice una variable count con valor 0.
 *      Tu tarea es añadir las siguientes operaciones utilizando Asignación, en este orden:
 *          1. Sumar 4 a count
 *          2. Multiplicar count por 2
 *          3. Restar 1 de count
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    //Variable inicial
    int count = 0;
    
    // Operaciones
    count += 4;
    count *= 2;
    count -= 1;
    
    // Imprimir resultado
    std::cout << "count = " << count;
    return 0;
}