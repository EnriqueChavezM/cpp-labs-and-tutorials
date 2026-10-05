/**************************************************************************************************
 * 
 * Ejemplo Sentencia If - else if - else 
 * Escribe un script que inicialice 1 variable que recibe como entrada un número que indica la velocidad del viento y lo almacena en una variable llamada 'wind'.
 *  La tarea es inicializar la variable 'status' basándote en las siguientes condiciones:
 *      - "Calm" si wind es menor que 8
 *      - "Breeze" si wind está entre 8 y 31 (incluyendo 8 y 31)
 *      - "Gale" si wind está entre 32 y 63 (incluyendo 32 y 63)
 *      - "Storm" de lo contrario
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    
    // Variables
    int wind;
    std::string status = "unset";

    // Almacenar entrada en variable
    std::cin >> wind; 
    
    // Sentencia condicional
    if (wind < 8){ status = "Calm"; }
    else if (wind >= 8 && wind <= 31) { status = "Breeze"; }
    else if (wind >= 32 && wind <= 63) { status = "Gale"; }
    else { status = "Storm"; }
    
    // imprimir resultado
    std::cout << "status = " << status;
    return 0; 
}