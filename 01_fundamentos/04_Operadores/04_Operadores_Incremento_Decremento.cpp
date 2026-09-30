/**************************************************************************************************
 * 
 * Ejemplo Operadores Incremento/Decremento
 *  Escribe un código que inicialice una variable count con valor 0.
 *      Tu tarea es añadir las siguientes operaciones, en este orden:
 *          1. Usa el operador de incremento (++) cuatro veces para sumar 4 a count
 *          2. Usa el operador de multiplicación (*) para multiplicar count por 2
 *          3. Usa el operador de decremento (--) una vez para restar 1 a count
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    int count = 0;
    
    // Operaciones 
    count ++;
    count ++;
    count ++;
    count ++;
    count = count * 2;
    count --;
    
    // Imprimir Resultado
    std::cout << "count = " << count;
    return 0;
}