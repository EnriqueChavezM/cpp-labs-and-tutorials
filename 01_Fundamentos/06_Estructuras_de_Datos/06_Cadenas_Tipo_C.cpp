/**************************************************************************************************
 * 
 * Ejemplo:
 * └─ Crea una función llamada "printStringInfo" que tome una cadena de estilo C como entrada y haga lo siguiente:
 *      ├─ String:  seguido de la cadena original.
 *      ├─ Length:  seguido del resultado de strlen(str).
 *      ├─ Character at index 4:  seguido del carácter en esa posición.
 *      └─ Modified string:  seguido de la cadena después de cambiar el primer carácter a X.
 * 
**************************************************************************************************/
#include <iostream>
#include <string>
#include <cstring>

void printStringInfo(char str[]) {
    // Imprimir la cadena
    std::cout << "String: " << str << std::endl;

    // Imprimir la longitud de la cadena
    std::cout << "Length: " << strlen(str) << std::endl;

    // Imprimir el carácter en el índice 4
    std::cout << "Character at index 4: " << str[4] << std::endl;

    // Modificar el primer carácter a 'X'
    str[0] =  'X';

    // Imprimir la cadena modificada
    std::cout << "Modified string: " << str << std::endl;
}

/**************************************************************************************************/
int main() {
    /* Cadena tipo C */
    char message[] = "Hello, World!";

    /* Llamar función */
    printStringInfo(message);

    return 0;
}