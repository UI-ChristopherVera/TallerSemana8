#include <iostream>
using namespace std;
#include "suma.h" // Incluye el archivo de cabecera

int main() {

    float num1, num2, num3, resultado;

// SUMA
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    resultado = calcularPromedio(num1, num2, num3); // Llama a la función desde suma.cpp

    cout << "El Resultado es: " << resultado << endl;

//RESTA

    cout << "Programa para restar dos números" << endl;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    resultado = num1 - num2;

    cout << "La resta de " << num1 << " - " << num2 << " es: " << resultado << endl;
    
//MULTIPLICACION

    cout << "Ingrese el primer número: ";
    cin >> num2;

    cout << "Ingrese el 2 número: ";
    cin >> num2;

    resultado = num1 * num2;

    cout << "El resultado de la multiplicación es: " << resultado << endl;
    
    return 0;
}
