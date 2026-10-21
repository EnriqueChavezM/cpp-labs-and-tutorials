/**************************************************************************************************
 * 
 * Ejemplo:
 * ├─ Crea un programa que:
 * │    ├─ Reciba tres entradas en este orden:
 * │    │   ├─ n: el número de elementos de la matriz
 * │    │   ├─ index: una posición del índice (0 a n-1)
 * │    │   └─ newElement: un valor nuevo (cadena)
 * │    ├─ Después recibe n cadenas para llenar la matriz
 * │    ├─ Modifica la matriz reemplazando el elemento en index por el valor newElement
 * │    └─ Finalmente, imprime todos los elementos de la matriz modificada, uno por línea.
 * └─ Por ejemplo: 
 *      ├─ Para esta entrada:
 *      │    ├─ 3
 *      │    ├─ 1
 *      │    ├─ hello
 *      │    ├─ apple
 *      │    ├─ banana
 *      │    └─ cherry
 *      └─ La salida es:
 *          ├─ apple
 *          ├─ hello
 *          └─ cherry
 * 
**************************************************************************************************/
#include <iostream>
#include <string>


int main() {

    /* Variables */
    int n;
    int index;
    std::string newElement;
    
    /* Leer entradas */
    std::cout << "Ingrese el numero de elementos de la matriz: ";
    std::cin >> n;
    std::cout << "Ingrese la posición a modificar: ";
    std::cin >> index;
    std::cin.ignore();
    std::cout << "Ingrese el nuevo elemento de la posición " << index << " : ";
    std::getline(std::cin, newElement);

    /* Array */
    std::string arr[n];
    
    for (int i = 0; i < n; i++) {
        // Lee una cadena de texto y guárdala en arr[i]
        std::string element;
        std::cout << "Ingrese el elemento del indice " << i << " : ";
        std::getline(std::cin, element);
        // Rellena arr
        arr[i] = element;
        
    }
    
    // Modifica arr
    // Asigna 'newElement' al elemento en la posición 'index'
    arr[index] = newElement;
    
    // Imprime arr
    // Recorre el arreglo e imprime cada elemento
    std::cout << "La salida es:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}