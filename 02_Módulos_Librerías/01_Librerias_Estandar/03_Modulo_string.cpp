/**************************************************************************************************
 * Ejemplo 1:
 *  └─ Crea una función llamada "stringOperations" que tome una cadena como entrada y realice las siguientes operaciones utilizando funciones de cadenas:
 *      ├─ Imprime la longitud de la cadena.
 *      ├─ Agrega la cadena " - Modified" a la cadena original.
 *      ├─ Inserta la cadena "C++ " al principio de la cadena.
 *      ├─ Extrae una subcadena de longitud 5 comenzando en la posición 5.
 *      ├─ Reemplaza la aparición de la subcadena de longitud 5 que comienza en la posición 5 con la cadena "Awesome".
 *      ├─ Busca e imprime la posición del primer carácter de espacio en la cadena.
 *      ├─ Elimina 4 caracteres a partir de la posición 5.
 *      ├─ Comprueba si la cadena contiene la palabra "You" e imprime "Found" o "Not Found".
 *      ├─ Limpia la cadena y comprueba si está vacía.
 *      └─ Imprime la cadena modificada después de cada operación. Con el siguiente formato:
 *          ├─ Length: [Length of string]
 *          ├─ Append: [After Appending]
 *          ├─ Insert: [After Insert]
 *          ├─ Extract: [The extracted string]
 *          ├─ Replace: [After replacing]
 *          ├─ Space Found At: [Position of space]
 *          ├─ After Erase: [String after erasing]
 *          ├─ Contains You: [Found/Not Found]
 *          └─ Is Empty: [true/false]
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
    
    // 6. Encontrar el primer espacio
    std::cout << "Space Found At: " << str.find(" ") << std::endl;
    
    // 7. Borrar 4 caracteres desde la posición 5
    std::cout << "After Erase: " << str.erase(5, 4) << std::endl;
    
    // 8. Comprobar si contiene "You"
    std::string comprobar =  (str.find("you") != -1)? "Found" : "Not Found";
    std::cout << "Contains You: " << comprobar << std::endl;
    
    // 9. Limpiar la cadena y comprobar si está vacía
    str.clear();
    bool isEmpty = str.empty();
    std::string Emptytext = isEmpty ? "true" : "false";  
    std::cout << "Is Empty: " << Emptytext << std::endl;
    
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