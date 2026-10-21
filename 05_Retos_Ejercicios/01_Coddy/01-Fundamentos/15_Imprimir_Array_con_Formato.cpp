/**************************************************************************************************
 * 
 * Desafío:
 * ├─ Crea un programa que:
 * │    ├─ Reciba n: el número de elementos en el arreglo
 * │    └─ Luego reciba n cadenas de texto para poblar el arreglo
 * └─ Imprime el arreglo de forma estética en el siguiente formato:
 *      └─ [elem1, elem2, elem3, ...]
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    /* Variables */
    int n;

    /* Leer entradas */
    std::cout << "Ingresa el número de elementos en el arreglo: ";
    std::cin >> n;
    std::cin.ignore();

    /* Array */
    std::string arr[n];
    
    /* Rellenar array */
    for (int i = 0; i < n; i++) {
        /* Variable */
        std::string val;

        /* Leer elementos */
        std::cout << "Ingrese el elemento del indice " << i << " : ";
        std::getline(std::cin, val);

        /* Agregar */
        arr[i] = val;
    }
    
    // Imprimir el arreglo de forma estética
    std::cout << "[";
    for (int i = 0; i < n; i++){
        std::cout << arr[i];
        if (i != n-1){
            std::cout << ", ";
        }
    }
    std::cout << "]";
    
    return 0;
}