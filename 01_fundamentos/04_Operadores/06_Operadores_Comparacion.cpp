/**************************************************************************************************
 * 
 * Ejemplo Operadores de Asignación
 *  Escribe un script que inicialice 2 variables n1 y n2 con los valores 8 y 9 (respectivamente).
 *  Después de eso, inicializa otra variable n3 que contendrá si n1 es mayor que n2.
 *  
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    // Variables
    int n1 = 8;
    int n2 = 9;
    int n3 = n1 > n2;
    
    // Imprimir resultado
    std::cout << "n1 = " << n1 << ", n2 = " << n2 << ", n3 = " << n3 << std::endl;
    
    return 0;
}


