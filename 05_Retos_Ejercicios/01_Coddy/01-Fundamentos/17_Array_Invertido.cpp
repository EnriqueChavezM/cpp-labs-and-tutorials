/**************************************************************************************************
 * 
 * Desafío:
 * ├─ El código inicial lee el tamaño del arreglo n y después n números de tipo double en arr. 
 * ├─ También declara un segundo arreglo, reverseArr, y el bucle del final imprime reverseArr un elemento por línea.
 * ├─ Tarea: 
 * │    └─ Completar reverseArr para que contenga los elementos de arr en orden inverso. No cambies el código de lectura ni el bucle de impresión.
 * ├─ Por ejemplo: 
 * │    ├─ Para la entrada 3, 1, 2, 3 
 * │    └─ La salida es 3, 2, 1 (cada uno en su propia línea).
 * ├─ Una forma es recorrer arr hacia atrás y copiar cada elemento en la siguiente posición libre de reverseArr. 
 * └─ Para iterar hacia atrás, comienza desde n - 1 y decrementa i:
 *      └─for (int i = n - 1; i>=0; i--) {...}
 * 
**************************************************************************************************/
#include <iostream>
#include <vector>

int main() {
    /* Variable */
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
        std::cout << "Ingrese el valor del elemento " << i+1 << " : ";
        std::cin >> val;

        /* Agregar valor a array */
        arr[i] = val;
    }

    /* Array inverso*/
    double reverseArr[n];
    
    // Escribe tu código debajo
    /* Agregar elementos a array inverso */
    for (int i = n-1 ; i >= 0; i--){

        reverseArr[n-1-i] = arr[i];

    }

    /* Imprimir nuevo array */
    std::cout << "Resultado\n";
    for (int i = 0; i<n; i++) {
        std::cout << reverseArr[i] << std::endl;
    }
    return 0;
}