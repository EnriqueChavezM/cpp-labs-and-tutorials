/**************************************************************************************************
 * 
 * Desafió 1 If Else anidado
    * Crea un programa que verifique si alguien puede subir a una montaña rusa. 
    * Los requisitos son:
        * Debe tener al menos 12 años
        * Debe medir más de 150 cm
        * Si cumple ambos requisitos pero es menor de 15 años, necesita supervisión de un adulto
        * Imprime exactamente estos mensajes para cada caso:
            * Si es demasiado joven: "Sorry, you are too young"
            * Si no es lo suficientemente alto: "Sorry, you are not tall enough"
            * Si es menor de 15 y no hay un adulto: "Sorry, you need an adult with you"
            * Si es menor de 15 con un adulto: "You can ride with adult supervision!"
            * Si tiene 15 años o más y es lo suficientemente alto: "You can ride by yourself!"
 *  
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {

    // Variables
    int age, height;
    bool hasAdult;

    // leer valor de Entrada
    std::cin >> age >> height >> hasAdult;

    // 1. Condicional menor a 12 años
    if (age < 12){  std::cout << "Sorry, you are too young" << std::endl;   } // Fin 1.
    // 2. Condicional mayor a 12 años
    else {
        // 2.1. Condicional menor a 150cm
        if (height < 150){  std::cout << "Sorry, you are not tall enough" << std::endl;   } // Fin 2.1.
        // 2.2. Condicional mayor a 150cm
        else{
            // 2.2.1. Condicional menor 15 años
            if (age < 15 ){ 
                // 2.2.1.1. Condicional con adulto
                if (hasAdult){   std::cout << "You can ride with adult supervision!" << std::endl; } // Fin 2.2.1.1.
                // 2.2.2.2. Condicional sin adulto
                else {  std::cout << "Sorry, you need an adult with you" << std::endl;  } // Fin 2.2.2.2.
            } // Fin 2.2.1
            // 2.2.2. Condicional mayor a 15 años
            else {  std::cout << "You can ride by yourself!" << std::endl;  } // Fin 2.2.2
        } // Fin 2.2.
    } // Fin 2.
    
    /* Opción de Solución dada por CODDY
     if (age >= 12) {
        if (height > 150) {
            if (age < 15) {
                if (hasAdult) {
                    std::cout << "You can ride with adult supervision!";
                } else {
                    std::cout << "Sorry, you need an adult with you";
                }
            } else {
                std::cout << "You can ride by yourself!";
            }
        } else {
            std::cout << "Sorry, you are not tall enough";
        }        
    } else {
        std::cout << "Sorry, you are too young";
    }*/
    return 0;
}