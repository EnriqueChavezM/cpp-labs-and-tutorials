#include <iostream>
#include <iomanip> // Requerido para setw y setprecision

int main() {

    /* Alineación left / right */
    // Definimos un ancho de campo de 10 caracteres
    std::cout << std::left  << std::setw(10) << "Hola" << "|" << std::endl; // Alinear a la izquierda
    std::cout << std::right << std::setw(10) << "Hola" << "|" << std::endl; // Alinear a la derecha

    /* fixed (Formato Numérico) */
    double pi = 3.141592653589793;
    std::cout << "pi = 3.141592653589793" << std::endl;

    // 1. Sin fixed: Muestra hasta 10 dígitos significativos en total
    std::cout << "Sin fixed: " << std::setprecision(10) << pi << std::endl; 
    // Salida: 3.141592654 (redondea el último dígito)

    // 2. Con fixed: Muestra exactamente 10 decimales después del punto[cite: 1]
    std::cout  << "Con fixed y 10 decimales: " << std::fixed << std::setprecision(10) << pi << std::endl; 
    // Salida: 3.1415926536

    return 0;
}