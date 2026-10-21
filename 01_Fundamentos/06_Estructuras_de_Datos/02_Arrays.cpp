/**************************************************************************************************
 * 
 * Ejemplo:
 * └─ Crea un array llamado 'shoppingList' que contenga los siguientes elementos: "bread", "eggs", "milk" y "butter".
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    // Array 
    std::string shoppingList[]= {"bread", "eggs", "milk", "butter"};
    
    // Iterar e imprimir array
    std::cout << "Shopping List:" << std::endl;
    for (int i = 0; i < std::size(shoppingList); i++) {
        std::cout << shoppingList[i] << std::endl;
    }
    return 0;
}