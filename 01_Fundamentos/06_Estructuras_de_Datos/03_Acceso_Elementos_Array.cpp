/**************************************************************************************************
 * 
 * Ejemplo:
 * └─ Crea una función llamada values que reciba un array y su tamaño como argumento e imprima todos los elementos del array uno tras otro.
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

// Función de Acceso a elementos 
void values(int arr[], int size) {

    // Iterar en el array
    for (int i = 0; i < size; i++) {
        
        // Imprimir cada elemento
        std::cout << arr[i] << std::endl;
    }

}

// Función principal
int main() {

    // Variables
    int numbers[] = {109, 4, 7, 19, 57, 216, 68, 89, 132, 63};

    // Conocer longitud de array
    int size = std::size(numbers);

    // Llamar función
    values(numbers, size);
    return 0;
}