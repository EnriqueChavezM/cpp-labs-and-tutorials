/**************************************************************************************************
 * 
 * Ejemplo:
 * ├─ Cada caso de prueba tiene tres entradas.
 * │    └─ La primera entrada indica cuántas veces realizar las iteraciones, y las dos últimas entradas son números sobre los que realizaremos operaciones.
 * ├─ Crea una función que reciba dos argumentos
 * │    ├─ Devuelva el número mayor de los dos. 
 * │    └─ Si ambos son iguales, devuelve uno de ellos.
 * └─ Repite iterations veces y, en cada iteración, haz lo siguiente:
 *      ├─ Llama a la función con num1, num2 y guarda el resultado en una variable.
 *      ├─ Divide el número mayor de los dos entre 2 y después reemplaza la variable original mayor con el nuevo valor del resultado.
 *      ├─ imprime el nuevo valor.  
 *      └─ Continúa haciéndolo hasta que el programa haya iterado iterations veces o uno de los números sea menor que 2.
 * 
**************************************************************************************************/
#include <iostream>
#include <string>

double bigger(double arg1, double arg2) {
    // Evaluación
    if (arg1 > arg2){return arg1;}
    else {return arg2;}
}

int main() {
    // Variables
    int iterations;
    double num1, num2, reg;

    // Pedir y leer entradas
    std::cout << "Ingrese máximo de  iteraciones: ";
    std::cin >> iterations;
    std::cout << "Ingrese primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese segundo número: ";
    std::cin >> num2;

    // Operaciones
    for (int i = 0; i < iterations; i++) {
        // Escribe tu código debajo
        reg = bigger (num1,num2);
        if (num1 > 2 and num2 > 2 ){
            if (reg == num1) {
                num1 /= 2;
                std::cout << num1 << std::endl;
            }
            else {
                num2 /= 2;
                std::cout << num2 << std::endl;
            }
        }
        else {
            break;
        }
    }
    return 0;
}