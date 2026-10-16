/**************************************************************************************************
 * 
 * Ejemplo:
 * ├─ Escribe un programa que obtenga dos números int como entrada. 
 * ├─ Los números de entrada son los argumentos de la función. 
 * ├─ Crea una función que reciba dos argumentos, calcule su producto y lo imprima.
 * └─ Llama a la función con estos números de entrada
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

// Declaración de la función
int producto (int num1, int num2){
    return num1 * num2;
}

int main() {
    int a, b;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;
    // Llama a la función con a y b como argumentos
    std::cout << "El producto de  los números es: "<< producto(a,b);
    return 0;
}
