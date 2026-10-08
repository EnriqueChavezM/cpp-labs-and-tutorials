/**************************************************************************************************
 * 
 * Proyecto:
 * └─ En este proyecto, crearás una aplicación de calculadora básica que realiza operaciones aritméticas como suma, resta, multiplicación y división.
 *    ├─ Muestra en pantalla la siguiente mensaje de bienvenida: "Calculator App".
 *    ├─ Obtener dos números de tipo double del usuario y almacénalos en variables llamadas num1 y num2.
 *    ├─ Después de obtener los números, imprimé en la consola con el siguiente formato:
 *    │  ├─ First number: [first number]
 *    │  └─ Second number: [second number]
 *    ├─ Añade las operaciones aritméticas básicas (suma, resta, multiplicación y división) sobre num1 y num2. 
 *    │  └─ Imprime los resultados en la consola en el siguiente formato:
 *    │     ├─ Sum: [sum]
 *    │     ├─ Difference: [difference]
 *    │     ├─ Product: [product]
 *    │     └─ Division: [division]
 *    └─ Modifica la salida para que siempre imprima un valor double con dos decimales.
 * 
**************************************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>

int main() {
    //Variables
    double num1, num2;

    // Mensaje de bienvenida
    std::cout << "Calculator App"  << std::endl;

    // Leer entradas
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Imprimir 
    std::cout << "First number: " << num1  << std::endl;
    std::cout << "Second number: " << num2  << std::endl;

    // Imprimir Operaciones
    std::cout << std::fixed << std::setprecision(2) << "Sum: " << (num1 + num2) << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Difference: " << (num1 - num2) << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Product: " << (num1 * num2) << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Division: " << (num1 / num2) << std::endl;

    return 0;
}