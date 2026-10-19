/**************************************************************************************************
 * 
 * Desafío:
 * ├─ Escribe una función llamada 'sigma' con un argumento que represente un número n.
 * ├─ La función devolverá la suma de todos los números desde 1 hasta n (incluido).
 * └─ Por ejemplo: 
 *      └─ Para sigma(5), la función devolverá 15, porque 15 = 1 + 2 + 3 + 4 + 5.
 * 
**************************************************************************************************/
#include <iostream>

int sigma(int n) {
    // Operación
    int sigma = 0; 
    for (int i = 1; i <= n; i++) {
        sigma += i;
    }
    return sigma;
}

int main() {
    // Variables
    int n;

    // Pedir y leer entrada
    std::cout << "Ingrese un numero: ";
    std::cin >> n;

    // Llamar función 
    int res = sigma(n);

    //Imprimir resultado
    std::cout << "El  valor se sigma de " << n << " es igual a " << res;
    return 0;
}