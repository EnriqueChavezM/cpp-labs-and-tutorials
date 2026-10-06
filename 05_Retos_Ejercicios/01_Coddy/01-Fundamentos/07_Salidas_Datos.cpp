/**************************************************************************************************
 * 
 * Desafió 1 Salidas de Datos
    * Escribe un programa que use cout para imprimir la siguiente salida:
        * Imprime "C++ is fun!" en la primera línea.
        * Imprime "Let's explore its features:" en la línea siguiente.
        * Imprime "1. Variables" y "2. Loops" en la misma línea, separados por una tabulación (\t).
        * Imprime "3. Functions" y "4. Classes" en la línea siguiente, separados por una tabulación (\t).
        * Imprime "Happy coding!" en una línea nueva.
        * Usa la secuencia de escape \t dentro de un literal de cadena (por ejemplo, "Column A\tColumn B") para insertar una tabulación horizontal.
 *  
**************************************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "C++ is fun!" << endl;
    cout << "Let's explore its features:\n";
    cout << "1. Variables" << "\t" << "2. Loops" << endl;
    cout << "3. Functions\t4. Classes\n";
    cout << "Happy coding!";

    return 0;
}