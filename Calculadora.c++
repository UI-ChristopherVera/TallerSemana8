#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, promedio;

    // Solicita al usuario que ingrese tres números
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    // Calcula el promedio
    promedio = (num1 + num2 + num3) / 3;

    // Muestra el resultado
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
