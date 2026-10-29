/**************************************************************************************************
 * 
 * Desafío:
 * ├─ Crea una función llamada "calculateAverageGrade" que reciba un array de enteros (que representan las calificaciones de los estudiantes) y el tamaño del array como entrada
 * ├─ Devuelva la calificación promedio como un double. 
 * ├─ La función debe hacer lo siguiente:
 * │    ├─ Calcular la suma de todas las calificaciones en el array.
 * │    ├─ Calcular la calificación promedio dividiendo la suma por el número de calificaciones.
 * │    └─ Devolver la calificación promedio.
 * └─ Finalmente, la función principal debe imprimir el resultado utilizando el siguiente formato: 
 *      └─ Average grade: [The result].
 * 
**************************************************************************************************/
#include <iostream>
#include <string>


double calculateAverageGrade(int grades[], int size) {
    // Escribe tu código aquí
    double sum = 0;
    for (int i = 0; i < size; i++){
        sum += grades[i];
    }
    return sum / size;
}

int main() {
    /* Variables */
    int n;

    /* Leer entradas */
    std::cout << "Ingrese el tamaño del arreglo: ";
    std::cin >> n;
    std::cin.ignore();
    
    /* Array */
    int arr[n];
    
    /* Rellenar array */
    for (int i = 0; i < n; i++) {
        int val;
        std::cout << "Ingrese la calificación: ";
        std::cin >> val;
        arr[i] = val;
    }

    /* Llamar función */
    double averageGrade = calculateAverageGrade(arr, n);

    /* Imprimir resultado */
    std::cout << "Average grade: " << averageGrade << std::endl;
    return 0;
}