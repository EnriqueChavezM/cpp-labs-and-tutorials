/**************************************************************************************************
 * 
 * Ejemplo:
 * ├─ Crea una función llamada "concatenateStrings" que reciba dos argumentos de tipo std::string, str1 y str2. 
 * ├─ La función debe concatenar str1, un espacio y str2, y devolver la cadena resultante. 
 * ├─ En la función main, declara dos cadenas, "firstName" y "lastName".
 * ├─ Llama a "concatenateStrings" con "firstName" y "lastName" como argumentos, y almacena el resultado en una variable llamada "fullName". 
 * └─ Imprime "fullName" en la consola.
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

// Concatenar las cadenas y devolver el resultado
std::string concatenateStrings(std::string str1, std::string str2) {
    /* Variables */
    std::string name;

    /* Concatenar */
    name = str1 + " " + str2;

    /* Resultado */
    return name;

}

int main() {
    /* Variables */
    std::string firstName;
    std::string lastName;
    std::string fullName;

    /* Pedir valores */
    std::cout <<"Ingresa tu nombre: ";
    std::getline(std::cin, firstName);
    std::cout <<"Ingresa tu apellido: ";
    std::getline(std::cin, lastName); 

    // Llamar a concatenateStrings y almacenar el resultado en fullName
    fullName = concatenateStrings(firstName, lastName);

    // Imprimir fullName
    std::cout << "Tu Nombre completo es: " << fullName;

    return 0;
}