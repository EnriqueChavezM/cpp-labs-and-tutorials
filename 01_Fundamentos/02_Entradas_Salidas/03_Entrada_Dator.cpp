#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variables
    int edad;
    string nombre;

    // Leer entradas
    cout << "Ingresa tu nombre completo: ";
    getline(cin, nombre); // Lee la línea completa hasta presionar Enter
    cout << "Ingresa tu edad: ";
    cin >> edad; // El programa espera a que el usuario digite el dato y presione Enter
    
    // Imprimir
    cout << "Hola!!!!\n" << nombre << "!" << endl;
    cout << "Tu edad es: " << edad << "años" << endl;
    return 0;
}