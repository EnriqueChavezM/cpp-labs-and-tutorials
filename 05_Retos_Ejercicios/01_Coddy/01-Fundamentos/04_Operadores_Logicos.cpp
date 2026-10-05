/**************************************************************************************************
 * 
 * Desafió 1 Operadores Lógicos
 * Escribe un script que inicialice 2 variables b1 y b2 (respectivamente).
 *  Necesitas asignar valores enteros a las variables b1 y b2 para que b3 se evalúe como 'true' en la expresión: 
 *      bool b3 = !((b1 + b2) > (b1 * b2)).
 *  
**************************************************************************************************/
/*
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
*/

/**************************************************************************************************
 * 
 * Desafió 2 Operadores Lógicos
 * Crea un programa para decidir si es un buen día para la producción de energía mediante paneles solares
 *  1. Inicializa estas variables:
 *      1.1. isSunny con el valor true
 *      1.2. windSpeed con el valor 5.4
 *      1.3. temperature con el valor 23 
 *      1.4. solarPanelOutput con el valor 9
 *      1.5. isCloudy con el valor false
 *  2. Crea una expresión lógica que compruebe TODAS estas condiciones:
 *      2.1. Hace sol
 *      2.2. La velocidad del viento es menor que 10
 *      2.3. La producción del panel solar es menor que 15
 *      2.4. La temperatura está por encima de 20 O NO hay nubes
 *  
**************************************************************************************************/
#include <iostream>

int main() {
    // Inicializar variables
    bool isSunny = true;
    double windSpeed = 5.4;
    int temperature = 23;
    int solarPanelOutput = 9;
    bool isCloudy = false;

    // La expresión lógica completa
    bool result = (isSunny == true) && (windSpeed < 10) && (solarPanelOutput < 15) && (temperature > 20 || !isCloudy);
    
    /*Opción de Solución dada por CODDY
    bool result = isSunny && windSpeed < 10 && solarPanelOutput < 15 && (temperature > 20 || !isCloudy);
    */

    // Imprimir resultados
    std::cout << "1. Is it sunny? " << std::boolalpha << isSunny << std::endl;
    std::cout << "2. Is wind speed safe? " << (windSpeed < 10) << std::endl;
    std::cout << "3. Do panels produce less? " << (solarPanelOutput < 15) << std::endl;
    std::cout << "4. Is temperature good OR no clouds? " << (temperature > 20 || !isCloudy) << std::endl;
    std::cout << "5. Final result: " << result << std::endl;

    return 0;
}