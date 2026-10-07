/**************************************************************************************************
 * 
 * Desafío 1:
 * ├─ Escribe un programa que obtenga la edad del usuario como entrada.
 * └─ El programa mostrará (imprimirá) el número de años que faltan para llegar a 120 (en un formato específico, que se muestra a continuación).
 *    └─ Por ejemplo, para la entrada 25, la salida esperada es "95 years till 120".
 * 
**************************************************************************************************/
/*
#include <iostream>
#include <string>

int main() {
    // Variables
    int edad, faltan = 0;

    // Leer entrada
    std::cout << "Ingresa Tu Edad: ";
    std::cin >> edad;

    // Operación
    faltan = 120-edad;

    // Imprimir resultado
    std::cout << faltan << " years till 120";

    // Opción de Solución dada por CODDY
    // int age;
    // std::cin >> age;
    // std::cout << (120 - age) << " years till 120";

    return 0;
}
*/
/**************************************************************************************************
 * 
 * Desafío 2:
 * └─ Escribe un programa que reciba una entrada del usuario.
 *    └─ El programa mostrará "T" si la entrada es igual a “1” y "F" en caso contrario.
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    // Variable
    std::string input, output;

    // Leer entrada
    std::cin >> input;

    // Operación
    output = (input == "1")? "T": "F";
    std::cout << output;

    /* Opción de Solución dada por CODDY
    if (input == "1"){ 
        std::cout << "T"; 
    }
    else { 
        std::cout << "F"; 
    }
    */
    return 0;
}