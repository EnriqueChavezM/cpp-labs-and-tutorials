/**************************************************************************************************
 * 
 * Desafió 1 If Else
 * Escribe un script que inicialice 2 variables que recibe como entrada dos números n1 y n2  de tipo double y una cadena de un solo carácter op.
 * Los valores posibles para op son '+', '-', '/' y '*'
 * Tu tarea es establecer la variable result de tipo double basándote en las condiciones:
 *  - si op es '+', establece result con n1 + n2.
 *  - si op es '-', establece result con n1 - n2.
 *  - si op es '/', establece result con n1 / n2.
 *  - si op es '*', establece result con n1 * n2.
 *  
**************************************************************************************************/
#include <iostream>

int main() {

    // Iniciar variables
    double n1, n2;
    char op;

    // Leer Entrada
    std::cin >> n1 >> n2 >> op;
    
    // Operador Condicional
    double result = (op  == '+')? n1 + n2: (op == '-')? n1 - n2: (op == '/')? n1 / n2: n1 * n2;

    /* Opción de Solución dada por CODDY
    if (op == '+') {
        result = n1 + n2;
    } else if (op == '-') {
        result = n1 - n2;
    } else if (op == '/') {
        result = n1 / n2;
    } else if (op == '*') {
        result = n1 * n2;
    }
    */
    
    // Imprimir resultado
    std::cout << result << std::endl;
    return 0;
}