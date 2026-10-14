/**************************************************************************************************
 * 
 * Ejemplo:
 * ├─ Escribe un programa que reciba una entrada, un número. 
 * ├─ El número de entrada indica cuántas veces se debe ejecutar la función descrita a continuación.
 * └─ Crea una función que calcule la suma de todos los números entre 1 y 1000 (incluidos) y la imprima.
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

// Declaración de la función
void sumNumbers() {
    int suma = 0;
    for (int x = 1; x <= 1000; x++){
        suma += x;
    }
    std::cout << suma << std::endl;
}

int main() {
    // Variables
    int n;

    // Leer entrada 
    std::cout << "Ingrese el numero de  repeticiones de ejecucion de funcion ";
    std::cin >> n;

    // Repetir Función
    for (int i = 0; i < n; i++) {
        // Llama a la función n veces
        sumNumbers();
    }
    return 0;
}