#include <iostream>
using namespace std;
#include "suma.h" // Incluye el archivo de cabecera

int main() {
      float num1, num2, num3, promedio;

    // SUMA
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    promedio = calcularPromedio(num1, num2, num3); // Llama a la función desde suma.cpp

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
    float num1m, num2m, resultadom;

    cout << "Ingrese el primer número: ";
    cin >> num1m;

    cout << "Ingrese el 2 número: ";
    cin >> num2m;

    resultado = num1m * num2m;

    cout << "El resultado de la multiplicación es: " << resultadom << endl;
    return 0;
}
