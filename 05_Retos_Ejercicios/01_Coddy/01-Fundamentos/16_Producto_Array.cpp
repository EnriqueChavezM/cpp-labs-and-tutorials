/**************************************************************************************************
 * 
 * Desafío:
 * ├─ Escribe una función llamada "prod" que reciba un arreglo de números de tipo double y el tamaño del arreglo como argumentos, y devuelva el producto de todos los números en el arreglo.
 * └─ Por ejemplo, para [1, 2, 3], devuelve 6 = 1 * 2 * 3.
 * 
**************************************************************************************************/
#include <iostream>
#include <vector>

/* Función */
double prod(double arr[], int size) {
    /* Variable */
    double producto = 1;

    /* Multiplicar elemento */
    for (int i = 0; i < size; i++) { producto *= arr[i]; }

    /* Regresar resultado */
    return producto;
}

int main() {

    /* Variables */
    int n;

    /* Pedir tamaño de array */
    std::cout << "Ingrese el tamaño del array: ";
    std::cin >> n;
    std::cin.ignore();

    /* Array */
    double arr[n];

    /* Pedir elementos de array */
    for (int i = 0; i < n; i++) {
        /* Variable */
        double val;
        
        /* Pedir elementos */
        std::cout << "Ingrese el valor del elemento " << i << " : ";
        std::cin >> val;

        /* Agregar valor a array */
        arr[i] = val;
    }

    /* Llamar función */
    double result = prod(arr, n);

    /* Imprimir resultado */
    std::cout << "El producto de los elementos del array: " << result << std::endl;
    return 0;
}