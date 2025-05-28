#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, promedio;

//SUMA
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

//RESTA
    double numero1, numero2, resultado;

    cout << "Programa para restar dos números" << endl;

    cout << "Ingresa el primer número: ";
    cin >> numero1;

    cout << "Ingresa el segundo número: ";
    cin >> numero2;

    resultado = numero1 - numero2;

    cout << "La resta de " << numero1 << " - " << numero2 << " es: " << resultado << endl;
//MULTIPLICACION
    float num1, num2, resultado;

    cout << "Ingrese el primer
 número: ";
    cin >> num1;

    cout << "Ingrese el 2 número: ";
    cin >> num2;

    resultado = num1 * num2;

    cout << "El resultado de la multiplicación es: " << resultado << endl;
    return 0;
}
