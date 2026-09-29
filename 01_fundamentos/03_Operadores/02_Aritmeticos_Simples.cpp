/**************************************************************************************************
 * 
 * Ejemplo Operadores aritméticos
 *  Escribe un código que inicialice dos variables, a y b, con los valores 5.2 y 2.6 (respectivamente).
 *  Después de eso, inicializa otra variable c que contendrá el resultado de a / b.
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    // Escribe tu código a continuación
    double a = 5.2;
    double b = 2.6;
    double c = a + b;
    double d = a - b;
    double e = a * b;
    double f = a / b;
    
    // No cambies la línea de abajo
    std::cout << "a = " << a << std::endl; 
    std::cout << "b = " << b << std::endl;
    std::cout << "a + b = " << c << std::endl;
    std::cout << "a - b = " << d << std::endl;
    std::cout << "a * b = " << e << std::endl;
    std::cout << "a / b = " << f << std::endl;
    
    return 0;
}