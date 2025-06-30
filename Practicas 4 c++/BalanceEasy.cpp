#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaraci�n de variables
    float ingresos = 0, gastos = 0, balance = 0;
    string descripcion;
    char opcion;

    // Men� principal
    do {
        cout << "\n--- Sistema Contable B�sico ---" << endl;
        cout << "1. Registrar ingreso" << endl;
        cout << "2. Registrar gasto" << endl;
        cout << "3. Mostrar balance" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opci�n: ";
        cin >> opcion;

        switch(opcion) {
            case '1':
                // Registrar ingreso
                cout << "Ingrese el monto del ingreso: ";
                float ingreso;
                cin >> ingreso;
                cout << "Descripci�n del ingreso: ";
                cin.ignore();
                getline(cin, descripcion);
                ingresos += ingreso;
                cout << "Ingreso registrado: " << descripcion << " por $" << ingreso << endl;
                break;

            case '2':
                // Registrar gasto
                cout << "Ingrese el monto del gasto: ";
                float gasto;
                cin >> gasto;
                cout << "Descripci�n del gasto: ";
                cin.ignore();
                getline(cin, descripcion);
                gastos += gasto;
                cout << "Gasto registrado: " << descripcion << " por $" << gasto << endl;
                break;

            case '3':
                // Mostrar balance
                balance = ingresos - gastos;
                cout << "\n--- Resumen Financiero ---" << endl;
                cout << "Total Ingresos: $" << ingresos << endl;
                cout << "Total Gastos: $" << gastos << endl;
                cout << "Balance Actual: $" << balance << endl;
                if (balance < 0) {
                    cout << "�Advertencia! Tienes un balance negativo." << endl;
                }
                break;

            case '4':
                cout << "Saliendo del sistema. �Gracias por usar este software!" << endl;
                break;

            default:
                cout << "Opci�n no v�lida. Intente nuevamente." << endl;
        }
    } while(opcion != '4');

    return 0;
}
