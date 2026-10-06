#include <iostream>
#include <iomanip> // Incluimos la librería para usar manipuladores de formato

using namespace std;

int main() {
    double pi = 3.1415926535;
    double precio = 19.5;

    // 1. Formato de decimales con setprecision
    cout << "--- FORMATO DE DECIMALES ---" << endl;
    cout << "Pi normal: " << pi << endl;
    cout << "Pi con 3 decimales fijos: " << fixed << setprecision(3) << pi << endl << endl;

    // 2. Alineación y ancho de columna con setw y setfill
    cout << "--- TABLA CON FORMATO ---" << endl;
    cout << setfill('.'); // Rellenar con puntos los espacios libres
    
    cout << left << setw(15) << "Producto" << right << setw(10) << "Precio" << endl;
    cout << left << setw(15) << "Manzanas" << right << setw(10) << fixed << setprecision(2) << precio << "$" << endl;
    cout << left << setw(15) << "Naranjas" << right << setw(10) << 5.00 << "$" << endl;

    return 0;
}