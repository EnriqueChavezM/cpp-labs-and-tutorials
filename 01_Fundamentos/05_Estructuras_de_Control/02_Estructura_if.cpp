/**************************************************************************************************
 * 
 * Ejemplo Sentencia If
 * Escribe un script que inicialice 2 variables a, b y c  (respectivamente).
 *  Inicializa c = 0
 *  Necesitas asignar valores enteros a las variables a y b para que el if se evalúe como 'true' en la expresión: 
 *      if (a >= b && !(b < 10))
 *  Cuando el if sea true c = 2
 *  Al salir de la sentencia suma 1 a c 
 *  Imprime el resultado (3)
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    // Iniciar Variables
    int a = 12;
    int b = 11;
    int c = 0;

    // Sentencia if
    if (a >= b && !(b < 10)) {
        c = 2;
    } // Fin if
    
    // Sumar e imprimir resultado
    c += 1;
    std::cout << "c = " << c;
    return 0;
}