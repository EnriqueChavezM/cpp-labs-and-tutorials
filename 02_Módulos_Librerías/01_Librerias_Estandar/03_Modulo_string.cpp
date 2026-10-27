/**************************************************************************************************
 * Ejemplo 1:
 *  └─ Crea una función llamada "stringOperations" que tome una cadena como entrada y realice las siguientes operaciones utilizando funciones de cadenas:
 *      ├─ Imprime la longitud de la cadena.
 *      ├─ Agrega la cadena " - Modified" a la cadena original.
 *      ├─ Inserta la cadena "C++ " al principio de la cadena.
 *      ├─ Extrae una subcadena de longitud 5 comenzando en la posición 5.
 *      ├─ Reemplaza la aparición de la subcadena de longitud 5 que comienza en la posición 5 con la cadena "Awesome".
 *      └─ Imprime la cadena modificada después de cada operación. Con el siguiente formato:
 *          ├─ Length: [Length of string]
 *          ├─ Append: [After Appending]
 *          ├─ Insert: [After Insert]
 *          ├─ Extract: [The extracted string]
 *          └─ Replace: [After replacing]
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

void stringOperations(std::string str) {
    // 1. Imprimir la longitud de la cadena
    std::cout << "Length: " << str.length() << std::endl;

    // 2. Añadir " - Modified" al final de la cadena
    std::cout << "Append: " <<  str.append(" - Modified") << std::endl;

    // 3. Insertar "C++ " al principio
    std::cout << "Insert: " << str.insert(0, "C++ ") << std::endl;
    
    // 4. Extraer una subcadena de longitud 5 empezando en la posición 5
    std::cout << "Extract: " << str.substr(5, 5) << std::endl;
    
    // 5. Reemplazar la subcadena en la posición 5 con "Awesome"
    std::cout << "Replace: " << str.replace(5, 5, "Awesome") << std::endl;
    
}

int main() {

    /* Variables */
    std::string str;

    /* Leer Cadena */
    std::cout << "Ingrese un Mensaje: ";
    std::getline(std::cin, str);

    /* Llamar función */
    stringOperations(str);
    return 0;
}