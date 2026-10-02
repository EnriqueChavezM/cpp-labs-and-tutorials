/**************************************************************************************************
 * 
 * Ejemplo Operadores Lógicos
 * Escribe un script que inicialice 2 variables b1 y b2 con los valores True y False (respectivamente).
 *  Después de eso, inicializa otras variables con &&, || y ! 
 *  
**************************************************************************************************/
#include <iostream>
#include <string>


int main() {
    // Variables
    bool b1 = true;
    bool b2 = false;

    // Operaciones
    bool b3 = b1 && b2;
    bool b4 = b1 || b2;
    bool b5 =  !b3;
    
    // Convertir a texto el resultado
    std::string bt1 = b1 ? "true" : "false"; 
    std::string bt2 = b2 ? "true" : "false"; 
    std::string bt3 = b3 ? "true" : "false"; 
    std::string bt4 = b4 ? "true" : "false"; 
    std::string bt5 = b5 ? "true" : "false"; 

    // Imprimir resultados
    std::cout << "b1 = " << b1 << " = " << bt1 << std::endl;
    std::cout << "b2 = " << b2 << " = " << bt2 << std::endl;
    std::cout << "b3 = " << b3 << " = " << bt3 << std::endl;
    std::cout << "b4 = " << b4 << " = " << bt4 << std::endl;
    std::cout << "b5 = " << b5 << " = " << bt5 << std::endl;
    
    return 0;
}