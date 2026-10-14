/**************************************************************************************************
 * 
 * Desafío:
 * ├─ Escribe un programa que primero acepte un entero n, que represente cuántos números enteros adicionales se introducirán a continuación. 
 * ├─ Después, lee exactamente n números enteros de la entrada. 
 * └─ Finalmente, calcula e imprime la suma de esos n números (sin incluir la primera entrada).
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    // Variables
    int numLoops, num;
    int sum = 0;

    // Leer entrada 
    std::cout << "Ingrese numero de números a sumar: ";
    std::cin >> numLoops;
    
    // Ciclo de entrada
    for(int i = 1; i <= numLoops; i++){
        // Leer entrada de números
        std::cout << "Ingrese valor del numero " << i <<": ";
        std::cin >> num;
        sum += num;
    }

    // Imprimir Resultado
    std::cout << "Suma Total = " << sum;

    return 0;
}