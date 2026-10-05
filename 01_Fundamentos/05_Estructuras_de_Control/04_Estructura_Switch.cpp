/**************************************************************************************************
 * 
 * Ejemplo Sentencia switch
 *  Crea un programa que tome un número de month (1 para enero, 2 para febrero, etc.) e imprima la season a la que pertenece. 
 *  Usa una instrucción switch para la lógica.
 *  Las season y sus month correspondientes son:
 *      - Winter: diciembre (12), enero (1), febrero (2)
 *      - Spring: marzo (3), abril (4), mayo (5)
 *      - Summer: junio (6), julio (7), agosto (8)
 *      - Autumn: septiembre (9), octubre (10), noviembre (11)
 *      - Invalid month: para otras opciones
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {

    // Iniciar variables
    int month;
    std::string season = "";

    // Leer Entrada
    std::cin >> month;
        
    // Estructura Switch
    switch (month)
    {
    case 12:
    case 1:
    case 2:
        season = "Winter";
        break;
    case 3:
    case 4:
    case 5:
        season = "Spring";
        break;
    case 6:
    case 7:
    case 8:
        season = "Summer";
        break;
    case 9:
    case 10:
    case 11:
        season = "Autumn";
        break;
    default:
        season ="Invalid month";
        break;
    }
    
    // Imprimir resultado
    std::cout << season << std::endl;
    return 0;
}