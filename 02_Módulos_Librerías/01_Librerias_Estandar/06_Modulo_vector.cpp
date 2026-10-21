#include <iostream>
#include <vector> // Librería obligatoria para std::vector

using namespace std;

int main() {
    // Declarar un vector de enteros vacío
    vector<int> num;

    // 1. push_back(): Agregar elementos al final
    num.push_back(10);
    num.push_back(20);
    num.push_back(30);

    // 2. size(): Consultar el tamaño actual
    cout << "Tamaño actual: " << num.size() << endl; // Salida: 3

    // 3. empty(): Verificar si está vacío
    if (num.empty()) {
        cout << "El vector está vacío." << endl;
    } else {
        cout << "El vector tiene elementos." << endl;
    }

    // 4. pop_back(): Eliminar el último elemento (que era el 30)
    num.pop_back();
    cout << "Tamaño después de pop_back(): " << num.size() << endl; // Salida: 2

    // 5. clear(): Vaciar todo el vector
    num.clear();
    cout << "Tamaño después de clear(): " << num.size() << endl; // Salida: 0

    return 0;
}