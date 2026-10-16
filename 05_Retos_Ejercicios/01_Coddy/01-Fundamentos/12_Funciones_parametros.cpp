/**************************************************************************************************
 * 
 * Desafío:
 * ├─ Crea una función llamada 'calculate' que toma dos enteros y un carácter como argumentos (parámetros).
 * ├─ El carácter representa una operación aritmética: 
 * │    └─ +, -, *, o /.
 * ├─ Realiza la operación correspondiente en los dos enteros y imprime el resultado en el formato: 
 * │    └─ [num1] [operation] [num2] = [result].
 * └─ NOTA:
 *      └─ Para la división (/), realiza la división entera (ignora los restos).
 * 
**************************************************************************************************/
#include <iostream>
#include <string>
using namespace std;

void calculate(int a, int b, char op) {
    switch (op) {
    case '+': 
        std::cout << a << ' ' << op << ' ' << b << " = " << a + b;
        break;
    case '-': 
        std::cout << a << ' ' << op << ' ' << b << " = " << a - b;
        break;
    case '*': 
        std::cout << a << ' ' << op << ' ' << b << " = " << a * b;
        break;
    case '/': 
        std::cout << a << ' ' << op << ' ' << b << " = " << a / b;
        break;
    }
}

int main() {
    int a, b;
    char op;
    
    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;
    std::cout << "Ingrese el caracter de la operación a realizar: ";
    std::cin >> op;
    
    // Llama a la función con a, b y op como argumentos
    calculate(a, b, op);
    
    return 0;
}