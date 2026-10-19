/**************************************************************************************************
 * 
 * Ejemplo:
 * ├─ Crea una función void llamada "printNTimes". Esta función debe recibir dos argumentos:
 * │    ├─ Una cadena "message".
 * │    └─ Un entero n.
 * ├─ La función debe imprimir message en la consola n veces.
 * └─ En la función main, solo llama a printNTimes con las entradas message y la entrada n
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

void printNTimes(std::string message, int n) {
    // Repetir mensaje
    for (int i = 0; i < n; i++){
        std::cout << message << std::endl;
    }
}

int main() {
    // Variables
    std::string msg;
    int n;

    // Pedir y leer entradas
    std::cout << "Ingrese el  mensaje: "; 
    std::getline(std::cin, msg);
    std::cout << "Ingrese el numero de repeticiones: "; 
    std::cin >> n;

    // Llamar función
    printNTimes(msg, n);
    return 0;
}