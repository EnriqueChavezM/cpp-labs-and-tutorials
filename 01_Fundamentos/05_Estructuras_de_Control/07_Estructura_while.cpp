/**************************************************************************************************
 * 
 * Ejemplo:
 * ├─ Escribe un programa que obtenga una entrada, double num.
 * ├─ Usa un bucle while para dividir la entrada entre 2 mientras el número sea mayor o igual que 3.5.
 * └─ Imprime el primer número que sea menor que 3.5.
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    // Variable
    double num = 0;

    // Leer entrada
    std::cout << "Ingrese un Numero Real: ";
    std::cin >> num;
    
    // Ciclo while
    while(num >= 3.5){
        num /= 2;
        }
    
    // Imprimir Resultado 
    std::cout << num;
    return 0;

} // Fin