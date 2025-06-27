#include <iostream>
using namespace std;

int main() {
    float largo, ancho, espesor, volumen;

    // Solicitar dimensiones al usuario
    cout << "Ingrese el largo de la losa (en metros): ";
    cin >> largo;

    cout << "Ingrese el ancho de la losa (en metros): ";
    cin >> ancho;

    cout << "Ingrese el espesor de la losa (en metros): ";
    cin >> espesor;

    // Calcular el volumen de concreto
    volumen = largo * ancho * espesor;

    // Mostrar resultado
    cout << "El volumen de concreto requerido es: " << volumen << " m^3" << endl;

    return 0;
}
