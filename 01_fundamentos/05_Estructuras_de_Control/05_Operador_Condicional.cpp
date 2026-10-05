/**************************************************************************************************
 * 
 * Ejemplo Operador condicional
 *  Crea un programa que compruebe si un número es positivo, negativo o cero utilizando el operador condicional. 
 *  El programa debe:
 *      - Tomar un número entero como entrada del usuario.
 *      - Utilizar el operador condicional para determinar si el número es positivo, negativo o cero.
 *      - Imprimir el resultado con el formato: 
 *          - "The number is [positive/negative/zero]".
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {

    // Iniciar variables
    int number;
    std::string result = "";

    // Leer Entrada
    std::cin >> number;
    
    // Operador Condicional
    result = (number > 0)? "positive" : (number < 0)? "negative" : "zero" ;
    
    // Imprimir resultado
    std::cout << "The number is " << result << std::endl;
    return 0;
}