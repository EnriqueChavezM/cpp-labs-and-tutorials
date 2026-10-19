/**************************************************************************************************
 * 
 * Desafío:
 * ├─ Escribe una función llamada 'is_valid' que recibe dos argumentos de tipo cadena: 
 * │    ├─ username
 * │    └─ password
 * ├─ La función devolverá 'true' si el username y la password son válidos en el sistema, de lo contrario 'false'.
 * ├─ Nuestro sistema contiene solo dos nombres de usuario válidos:
 * │    ├─ "admin" 
 * │    └─ "user"
 * ├─ La contraseña válida para el nombre de usuario "user" es "qwerty".
 * └─ Para el nombre de usuario "admin" ¡cualquier contraseña es válida!
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

bool is_valid(std::string username, std::string password) {
    // Validar  condiciones nombre de usuario
    if (username == "user"){
        // Validar password
        if (password == "qwerty") { return true; }
        else {return false;}
    } 
    else if (username == "admin"){ return true;}
    else {return false;}
    
    /* Opción de Solución dada por CODDY
    if (username == "admin") {
        return true;
    }
    if (username == "user" && password == "qwerty") {
        return true;
    }
    return false;
    */
}

int main() {
    // Variables
    std::string user, pass;

    // Pedir y leer entradas
    std::cout << "Ingrese nombre de usuario: ";
    std::cin >> user;
    std::cout << "Ingrese password de usuario " << user <<": ";
    std::cin >> pass;

    // Llamar función
    bool res = is_valid(user, pass);

    // Mostrar resultado
    std::cout << (res ? "true" : "false");
    return 0;
}