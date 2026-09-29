#include <iostream>
#include <cmath> // Librería de funciones matemáticas

using namespace std;

int main() {
    
    // Modulo
    double resultado = fmod(7.8, 3.5); // result es 0.8
    cout << "El modulo 7.8 % 3.5 es: " << resultado << endl; 

    // Calcular potencia
    double base = 5.0;
    double exponente = 2.0;
    double potencia = pow(base, exponente); // 5^2
    cout << "5 elevado a la 2 es: " << potencia << endl;

    // Calcular raíz cuadrada
    double numero = 25.0;
    cout << "La raiz cuadrada de 25 es: " << sqrt(numero) << endl;

    // Redondeos
    double decimal = 4.7;
    cout << "Redondeo normal de 4.7: " << round(decimal) << endl;
    cout << "Redondeo hacia abajo (floor) de 4.7: " << floor(decimal) << endl;

    return 0;
}