/**************************************************************************************************
 * 
 * Ejemplo Números Reales
 * Escribe un programa en C++ que declare e inicialice las siguientes variables:
 *      Declara una variable float llamada 'itemPrice' e inicialízala con el valor 24.99f.
 *      Declara una variable double llamada 'temperature' e inicialízala con el valor 23.5.
 * 
**************************************************************************************************/

#include <iostream>
#include <iomanip>

int main() {
    // Declara tus variables aquí
    float pi_f = 3.14159265359f;
    double pi_d = 3.14159265359;

    // Mensaje de ejemplo
    std::cout << "Ejemplo Numeros Reales" << std::endl;

    // Por defecto, cout muestra solo 6 dígitos significativos, así que ambos imprimen 3.14159:
    std::cout << "pi float: " << pi_f << std::endl;
    std::cout << "pi double: " << pi_d << std::endl;

    // d todavía almacena más precisión internamente; aumenta la precisión de salida para revelarla:
    std::cout << "pi double 10 dig: "<< std::setprecision(10) << pi_d << std::endl; // Imprime: 3.14159265359
    
    return 0;
}// Fin main 

