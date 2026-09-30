/**************************************************************************************************
 * 
 * Desafío: Post-incremento/decremento
 *  Se te proporciona un código con inicializaciones de x, y y z. (¡No elimines estas líneas!)
 *  Tu tarea es usar los operadores de incremento/decremento para realizar las siguientes operaciones, en este orden:   
 *      1. Usa el operador de incremento posfijo para asignar el valor actual de x a a y después incrementar x.
 *      2. Usa el operador de decremento prefijo para decrementar y y asignar su nuevo valor a b. 
 *      3. Usa el operador de decremento posfijo para asignar el valor actual de z a c y después decrementar z.
 *  Después de realizar estas operaciones, imprime los valores de a, b, c, x, y y z en la consola con el siguiente formato:
 *      a: [value of a]
 *      b: [value of b]
 *      c: [value of c] 
 *      x: [value of x]
 *      y: [value of y]
 *      z: [value of z]
 *  Código Proporcionado:
 *      #include <iostream>
 *      int main() {
 *          int x = 10;
 *          int y = 20;
 *          int z = 30;
 *          int a, b, c;
 *          // Escribe tu código debajo
 * 
 *          // No cambies las líneas de abajo
 *          std::cout << "a: " << a << std::endl;
 *          std::cout << "b: " << b << std::endl;
 *          std::cout << "c: " << c << std::endl;
 *          std::cout << "x: " << x << std::endl;
 *          std::cout << "y: " << y << std::endl;
 *          std::cout << "z: " << z << std::endl;
 *          return 0;
 *      }
**************************************************************************************************/
#include <iostream>
#include <string>

int main() {
    int x = 10;
    int y = 20;
    int z = 30;
    
    int a, b, c;
    
    // Escribe tu código debajo
    a = x++;
    b = --y;
    c = z--;
    
    // No cambies las líneas de abajo
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
    
    return 0;
}