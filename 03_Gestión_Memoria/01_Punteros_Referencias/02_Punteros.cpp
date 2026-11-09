/**************************************************************************************************
 * Ejemplo 1:
 *  └─ El siguiente programa demuestra cómo declarar un puntero, asignarle la dirección de una variable, leer su valor y modificarlo indirectamente.
 * 
**************************************************************************************************/
#include <iostream>

using namespace std;

int main() {
    int edad = 25;       // Variable entera normal
    int *ptr = &edad;    // Puntero que almacena la dirección de 'edad'

    cout << "Valor de edad: " << edad << endl;
    cout << "Dirección de memoria de edad: " << &edad << endl;
    cout << "Valor almacenado en el puntero ptr (la dirección): " << ptr << endl;

    // Acceder al valor usando indirección (*)
    cout << "Valor apuntado por ptr (*ptr): " << *ptr << endl;

    // Modificar la variable original a través del puntero
    *ptr = 30;
    cout << "Nueva edad modificada a través del puntero: " << edad << endl;

    return 0;
}