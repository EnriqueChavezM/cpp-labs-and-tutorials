/**************************************************************************************************
 * 
 * Ejemplo:
 * └─ Crea un programa que haga lo siguiente:
 *      ├─ Inicialice un arreglo de cadenas llamado "fruits" con los valores "apple", "banana", "orange", "grape" y "kiwi".
 *      ├─ Utilice un bucle for mejorado para iterar sobre el arreglo fruits.
 *      └─ En cada iteración, imprima la fruta actual
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    // Inicializar el arreglo de frutas
    std::string fruits[] = {"apple", "banana", "orange", "grape", "kiwi"};

    // Usar un bucle for mejorado para iterar sobre el arreglo
    for(std::string nombre : fruits ){
        std::cout << nombre << "\n";
    }
    
    return 0;
}