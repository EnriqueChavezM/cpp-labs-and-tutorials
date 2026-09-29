/**************************************************************************************************
 * 
 * Ejemplo Casting
 *  Escribe un programa en C++ que demuestre la conversión de tipos. Realiza lo siguiente:
 *      Convierte las variables y almacena los resultados en nuevas variables.
 * 
**************************************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declarar e inicializar variables
    int number = 789;
    double numero_d = 99.99;
    bool isValid = true;
    string numberText = "123";
    string decimalText = "45.67";

    //Casting de variables
    string text1 = to_string(number);  // se convierte en "789"
    string text2 = to_string(numero_d); // se convierte en "99.990000"
    string text3 = isValid ? "true" : "false";  // se convierte en "true"
    int numero_i = (int)numero_d; //se convierte en 99  
    int entero_t = stoi(numberText);  // se convierte en 123
    double decimal_t = stod(decimalText);  // se convierte en 45.67
    
    
    // Mostrar los valores
    std::cout << "Numero entero: " << number << std::endl;
    std::cout << "De Entero a Texto: " << text1 << std::endl;
    std::cout << std::endl;
    
    std::cout << "Numero double: " << numero_d << std::endl;
    std::cout << "De Double a Entero: " << numero_i << std::endl;
    std::cout << "De Double a Texto: " << text2 << std::endl;
    std::cout << std::endl;

    std::cout << "Texto Entero: " << numberText << std::endl;
    std::cout << "Texto a entero: " << entero_t << std::endl;
    std::cout << std::endl;

    std::cout << "Texto Double: " << decimalText << std::endl;
    std::cout << "De Texto Double: " << decimal_t << std::endl;
    std::cout << std::endl;

    std::cout << "Bool " << isValid << std::endl;
    std::cout << "De Bool a Texto: " << text3 << std::endl;
    
    return 0;
}