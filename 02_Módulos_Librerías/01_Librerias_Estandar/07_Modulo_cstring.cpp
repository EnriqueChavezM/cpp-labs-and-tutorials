/**************************************************************************************************
 * Ejemplo 1:
 *  └─ El siguiente programa utiliza algunas de las funciones más comunes de <cstring> para medir, copiar y comparar cadenas de caracteres tradicionales:
 * 
**************************************************************************************************/
#include <iostream>
#include <cstring> // <-- Librería obligatoria para funciones de cadenas estilo C

using namespace std;

int main() {
    // Declaración de cadenas estilo C
    char saludo[20] = "Hola";
    char destino[20];

    // 1. strlen(): Obtener la longitud de la cadena
    cout << "Longitud de 'saludo': " << strlen(saludo) << " caracteres." << endl;

    // 2. strcpy(): Copiar una cadena en otra
    strcpy(destino, saludo);
    cout << "Cadena copiada en 'destino': " << destino << endl;

    // 3. strcat(): Concatenar texto al final
    strcat(saludo, " Mundo");
    cout << "Cadena concatenada: " << saludo << endl;

    // 4. strcmp(): Comparar dos cadenas
    char palabra1[] = "Apple";
    char palabra2[] = "Banana";

    if (strcmp(palabra1, palabra2) == 0) {
        cout << "Las palabras son idénticas." << endl;
    } else {
        cout << "Las palabras son diferentes." << endl;
    }

    return 0;
}