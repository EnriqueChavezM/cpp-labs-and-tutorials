/**************************************************************************************************
 * 
 * Ejemplo:
 * ├─ Crea una función llamada "calculateStats" que tome como entrada un arreglo de valores double y el tamaño del arreglo, y realice las siguientes operaciones:
 * │    ├─ Calcula la suma de todos los elementos del arreglo.
 * │    ├─ Calcula el promedio de los elementos del arreglo.
 * │    ├─ Encuentra el elemento máximo del arreglo.
 * │    └─ Encuentra el elemento mínimo del arreglo.
 * └─ La función debe devolver un arreglo de valores double que contenga la suma, el promedio, el máximo y el mínimo, en ese orden.
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

double* calculateStats(double arr[], int size) {
    // Necesitarás calcular 4 valores antes de almacenarlos en newArr
    // Inicializa las variables sum (empieza en 0), max y min (ambas empiezan en arr[0])
    double sum, average = 0;
    double max, min = arr[0]; 

    // Usa un bucle for para recorrer el arreglo
    for (int i = 0; i < size; i++){
        // Dentro del bucle:

        //   - Suma cada elemento a sum
        sum += arr[i];  

        //   - Compara cada elemento con max y actualiza max si el elemento es mayor
        if (max < arr[i]){ max = arr[i];}

        //   - Compara cada elemento con min y actualiza min si el elemento es menor
        if (min > arr[i]){ min = arr[i];}

    }
    // Calcula average = sum / size (después del bucle)
    average = sum / size;

    // Nuevo Array
    double* newArr = new double[4];
    newArr[0] = sum;
    newArr[1] = average;
    newArr[2] = max;
    newArr[3] = min;

    return newArr;
}

/************************************************************************************************/
int main() {
    /* Variables */
    int n;

    /* Leer tamaño y crear array*/
    std::cout <<"Ingrese el tamaño del array: ";
    std::cin >> n;
    std::cin.ignore();
    double arr[n];
    for (int i = 0; i < n; i++) {
        double val;
        std::cout <<"Ingrese el valor del indice " << i << ": ";
        std::cin >> val;
        arr[i] = val;
    }

    /* Llamar función*/
    double* stats = calculateStats(arr, n);

    /* Imprimir resultados */
    std::cout << "\nEl resultado es..." << std::endl;
    std::cout << "Sum: " << stats[0] << std::endl;
    std::cout << "Average: " << stats[1] << std::endl;
    std::cout << "Maximum: " << stats[2] << std::endl;
    std::cout << "Minimum: " << stats[3] << std::endl;
    delete[] stats;
    return 0;
}