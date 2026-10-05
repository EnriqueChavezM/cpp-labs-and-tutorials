/**************************************************************************************************
 * 
 * Ejemplo Operador Módulo
 *  Escribe un código que inicialice tres variables, a (int), b (double) y c (int) con los valores 9, 2.6, y 11 (respectivamente).
 *  Después de eso, inicializa las siguientes variables:
 *      d (int) que contendrá el resultado de a módulo 2 
 *      e (int) que contendrá el resultado de a módulo 3
 *      f (double) que contendrá el resultado de b módulo 1.5
 *      g (double) que contendrá el resultado de b módulo 3.9
 *      h (int) que contendrá el resultado de c módulo 10
 * 
**************************************************************************************************/
#include <iostream>
#include <cmath>

int main() {
    // Iniciar Variables
    int a = 9;
    double b = 2.6;
    int c = 11;
    
    // Variables Módulo
    int d = a % 2;
    int e = a % 3;
    double f = fmod(b,1.5);
    double g = fmod(b,3.9);
    int h = c % 10;
    
    // No cambies la línea de abajo
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "g = " << g << std::endl;
    std::cout << "h = " << h << std::endl;
    return 0;
}