#include <iostream>
#include <vector>
using namespace std;

// Función para calcular la resistencia equivalente en serie
float calcularSerie(const vector<float>& resistencias) {
    float resistenciaEquivalente = 0;
    for (size_t i = 0; i < resistencias.size(); i++) { // Cambiado a bucle tradicional
        resistenciaEquivalente += resistencias[i];
    }
    return resistenciaEquivalente;
}

// Función para calcular la resistencia equivalente en paralelo
float calcularParalelo(const vector<float>& resistencias) {
    float resistenciaEquivalente = 0;
    for (size_t i = 0; i < resistencias.size(); i++) { // Cambiado a bucle tradicional
        if (resistencias[i] != 0) {
            resistenciaEquivalente += 1 / resistencias[i];
        }
    }
    if (resistenciaEquivalente != 0) {
        return 1 / resistenciaEquivalente;
    }
    return 0;
}

int main() {
    int opcion;
    int numResistencias;
    vector<float> resistencias;

    cout << "--- Calculadora de Resistencias Equivalentes ---" << endl;
    cout << "Seleccione el tipo de circuito:" << endl;
    cout << "1. Circuito en Serie" << endl;
    cout << "2. Circuito en Paralelo" << endl;
    cout << "Opción: ";
    cin >> opcion;

    cout << "Ingrese el número de resistencias: ";
    cin >> numResistencias;

    resistencias.resize(numResistencias);
    for (int i = 0; i < numResistencias; i++) {
        cout << "Ingrese el valor de la resistencia " << i + 1 << " (en ohmios): ";
        cin >> resistencias[i];
    }

    if (opcion == 1) {
        float resultado = calcularSerie(resistencias);
        cout << "La resistencia equivalente en serie es: " << resultado << " ohmios" << endl;
    } else if (opcion == 2) {
        float resultado = calcularParalelo(resistencias);
        cout << "La resistencia equivalente en paralelo es: " << resultado << " ohmios" << endl;
    } else {
        cout << "Opción no válida. Por favor, intente nuevamente." << endl;
    }

    return 0;
}
