#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    string nombre;
    float peso, altura, imc;

    // Solicitar datos al usuario
    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su peso en kilogramos (kg): ";
    cin >> peso;

    cout << "Ingrese su altura en metros (m): ";
    cin >> altura;

    // Calcular el índice de masa corporal (IMC)
    imc = peso / (altura * altura);

    // Mostrar el resultado
    cout << "\nHola, " << nombre << ". Tu Índice de Masa Corporal (IMC) es: " << imc << endl;

    // Sugerencias basadas en el IMC
    if (imc < 18.5) {
        cout << "Estás por debajo del peso saludable. Consulta a un nutricionista." << endl;
    } else if (imc >= 18.5 && imc < 24.9) {
        cout << "Tu peso está en el rango saludable. ¡Sigue así!" << endl;
    } else if (imc >= 25 && imc < 29.9) {
        cout << "Tienes sobrepeso. Considera hacer ajustes en tu dieta y ejercicio." << endl;
    } else {
        cout << "Tu IMC indica obesidad. Es importante buscar orientación profesional." << endl;
    }

    return 0;
}
