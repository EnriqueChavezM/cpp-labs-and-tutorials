#include <iostream>
#include <string> // Incluimos la librería <string>

using namespace std;

int main() {
    string saludo = "Hola";
    string nombre = "Carlos";

    // Concatenar textos
    string mensaje = saludo + ", " + nombre + "!";
    cout << mensaje << endl; // Imprime: Hola, Carlos!

    // Obtener la longitud del texto
    cout << "El mensaje tiene " << mensaje.length() << " caracteres." << endl;

    // Extraer una subcadena (desde la posición 6, tomar 6 caracteres)
    string sub_texto = mensaje.substr(6, 6);
    cout << "Nombre extraido: " << sub_texto << endl; // Imprime: Carlos

    return 0;
}