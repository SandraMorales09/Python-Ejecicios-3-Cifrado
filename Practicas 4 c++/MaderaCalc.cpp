#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    float largo, ancho, espesor, volumen, densidad, peso;
    string tipo_madera;

    // Solicitar datos al usuario
    cout << "Ingrese el largo de la pieza de madera (en metros): ";
    cin >> largo;

    cout << "Ingrese el ancho de la pieza de madera (en metros): ";
    cin >> ancho;

    cout << "Ingrese el espesor de la pieza de madera (en metros): ";
    cin >> espesor;

    cout << "Ingrese el tipo de madera (ejemplo: Pino, Roble, Cedro): ";
    cin >> tipo_madera;

    // Determinar densidad según el tipo de madera
    if (tipo_madera == "Pino") {
        densidad = 500; // Densidad aproximada en kg/m^3
    } else if (tipo_madera == "Roble") {
        densidad = 750; // Densidad aproximada en kg/m^3
    } else if (tipo_madera == "Cedro") {
        densidad = 400; // Densidad aproximada en kg/m^3
    } else {
        cout << "Tipo de madera no reconocido. Usando densidad estándar de 600 kg/m^3." << endl;
        densidad = 600;
    }

    // Calcular el volumen y el peso
    volumen = largo * ancho * espesor;
    peso = volumen * densidad;

    // Mostrar resultados
    cout << "El volumen de la madera es: " << volumen << " m^3" << endl;
    cout << "El peso aproximado de la madera es: " << peso << " kg" << endl;

    return 0;
}
