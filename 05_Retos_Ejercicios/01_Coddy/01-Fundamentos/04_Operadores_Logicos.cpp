/**************************************************************************************************
 * 
 * Desafió Operadores Lógicos
 * Escribe un script que inicialice 2 variables b1 y b2 (respectivamente).
 *  Necesitas asignar valores enteros a las variables b1 y b2 para que b3 se evalúe como 'true' en la expresión: 
 *      bool b3 = !((b1 + b2) > (b1 * b2)).
 *  
**************************************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    // variables
    int b1 = 5;
    int b2 = 2;

    // Operación
    bool b3 = !((b1 + b2) > (b1 * b2));

    // Convertir a texto el resultado
    string bt3 = b3 ? "true" : "false";
    
    // No cambies la línea de abajo
    cout << "b3 = " << b3 << " = " << bt3 << endl;
    
    return 0;
}