/**************************************************************************************************
 * 
 * Desafío:
 * ├─ Crea un programa que reciba dos enteros que indiquen el tamaño de dos arreglos de enteros como entrada 
 * ├─ Determine si el segundo arreglo aparece como un patrón dentro del primero (en orden consecutivo).
 * ├─ Un patrón existe cuando todos los elementos del segundo arreglo aparecen juntos, en el mismo orden, en algún lugar dentro del primer arreglo, como si se buscara una subcadena dentro de una cadena.
 * └─ Por ejemplo:
 *      ├─ int arr1[] = {1, 2, 3, 4, 5, 6, 7};
 *      ├─ int arr2[] = {3, 4, 5};
 *      ├─ // Should return true
 *      ├─ int arr1[] = {5, 6, 7, 8, 9};
 *      ├─ int arr2[] = {6, 8};
 *      └─ // Should return false (not consecutive)
 * 
**************************************************************************************************/
#include <iostream>
#include <vector>
#include <string>

int main() {
    /* Variables */
    int n1;
    int n2;

    /* Leer Tamaño de arreglo */
    std::cout << "Ingrese el tamaño del primer array: ";
    std::cin >> n1;
    std::cout << "Ingrese el tamaño del segundo array: ";
    std::cin >> n2;
    std::cin.ignore();
    
    /* Array */
    int arr1[n1];
    int arr2[n2];
    
    /* LLenar primer array*/
    for (int i = 0; i < n1; i++) {
        int val;
        std::cout << "Ingrese el valor del indice " << i << " del primer array: ";
        std::cin >> val;
        arr1[i] = val;
    }
    
    /* LLenar segundo array*/
    for (int i = 0; i < n2; i++) {
        int val;
        std::cout << "Ingrese el valor del indice " << i << " del segundo array: ";
        std::cin >> val;
        arr2[i] = val;
    }

    // Escribe tu código a continuación usando arr1, arr2, n1, n2

    /* arr1 tiene que ser mas grande o igual que arr2 */
    if (n1 >= n2){ //if1
        int conteo = 0;
        
        /* Recorrer arreglo 1 */
        for (int i = 0; i <= n1-n2; i++) {
            if (conteo == n2){ break; }
            /* comprobar si arreglo 2 esta en arreglo 1 */
            int x = i;
            for (int j = 0; j < n2; j++) {
                /* Comprobar coincidencia y aumentar contador*/ 
                if (arr1[x] == arr2[j]){
                    conteo++;
                    x++; 
                    if (conteo == n2){ break; }
                    
                }
                else { 
                    conteo = 0;
                    break; }   
            }
            
        }
        /* Comprobar valor de conteo */
        if (conteo == n2){ std::cout << "true"; }
        else{ std::cout << "false"; }

    }
    /* Si arr1 es mas chico que arr2 no es posible*/
    else {std::cout << "false";}

    /* Opción de Solución dada por CODDY
    bool found = false;
    // Si arr2 es más grande que arr1, el patrón no puede existir
    if (n2 > n1) {
        std::cout << "false" << std::endl;
        return 0;
    }
    // Comprueba cada posición inicial posible en arr1
    for (int i = 0; i <= n1 - n2; i++) {
        bool matchFound = true;
        // Compara los elementos empezando desde la posición i
        for (int j = 0; j < n2; j++) {
            if (arr1[i + j] != arr2[j]) {
                matchFound = false;
                break;
            }
        }
        
        if (matchFound) {
            found = true;
            break;
        }
    }
    
    std::cout << (found ? "true" : "false") << std::endl;
    */

    return 0;
}