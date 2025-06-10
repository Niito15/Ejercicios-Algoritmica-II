/*

11)	Crear un programa que permita cargar un vector, luego, seleccionar los elementos del siguiente
Menú:
I.	Opción 1: Método Burbuja
1.	Ascendente
2.	Descendente
II.	Opción 2: Método de Inserción
1.	Ascendente
2.	Descendente
III.	Opción 3: Bandera
1.	Ascendente
2.	Descendente
Repetir el proceso tantas veces se desee (Utilizar un menú ¿Desea Repetir el proceso S/N?).

*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int main() {
    srand(time(0));
    int aux = 0;
    int dimension;
    int opcionP, opcionS;
    char seguir = 'S';
    cout << "Ingrese el tamaño del vector:" << endl;
    cin >> dimension;
    vector<int> M(dimension);
    
    // Cargar el vector M con números aleatorios
    for (int i = 0; i < dimension; i++) {
        M[i] = rand() % 30 + 1;
    }

    cout << "Se tiene el siguiente vector> " << endl;

    // Imprimir el vector M
    cout << "Vector M: ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << M[i] << "] ";
    }

    cout << endl;

    while (seguir= 'S' || seguir == 's') {

        cout << "Seleccione una opción del menú:" << endl;
        cout << "1. Método Burbuja" << endl;
        cout << "2. Método de Inserción" << endl;
        cout << "3. Método Bandera" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcionP;
        cout << endl;

        switch (opcionP)
        {
            case 1: // Método Burbuja
                cout << "Seleccione el orden que desea:" << endl;
                cout << "1. Ascendente" << endl;
                cout << "2. Descendente" << endl;
                cout << "Ingrese su opción: ";
                cin >> opcionS;
                cout << endl;
                switch (opcionS)
                {
                case 1: // Ascendente
                    for (int i = 0; i < dimension - 1; i++) {
                        for (int j = 0; j < dimension - i - 1; j++) {
                            if (M[j] > M[j + 1]) {
                                aux = M[j];
                                M[j] = M[j + 1];
                                M[j + 1] = aux;
                            }
                        }
                    }
                    cout << "Vector ordenado Ascendente por Método Burbuja: ";
                    break;
                case 2: // Descendente
                    for (int i = 0; i < dimension - 1; i++) {
                        for (int j = 0; j < dimension - i - 1; j++) {
                            if (M[j] < M[j + 1]) {
                                aux = M[j];
                                M[j] = M[j + 1];
                                M[j + 1] = aux;
                            }
                        }
                    }
                    cout << "Vector ordenado Descendente por Método Burbuja: ";
                    break;
                default:
                    cout << "Opción no válida." << endl;
                    break;
                }
                break;
            case 2: // Método de Inserción
                cout << "Seleccione el orden que desea:" << endl;
                cout << "1. Ascendente" << endl;
                cout << "2. Descendente" << endl;
                cout << "Ingrese su opción: ";
                cin >> opcionS;
                cout << endl;
                switch (opcionS)
                {
                case 1: // Ascendente
                    for (int i = 1; i < dimension; i++) {
                        aux = M[i];
                        int j = i - 1;
                        while (j >= 0 && M[j] > aux) {
                            M[j + 1] = M[j];
                            j--;
                        }
                        M[j + 1] = aux;
                    }
                    cout << "Vector ordenado Ascendente por Método de Inserción: ";
                    break;
                case 2: // Descendente
                    for (int i = 1; i < dimension; i++) {
                        aux = M[i];
                        int j = i - 1;
                        while (j >= 0 && M[j] < aux) {
                            M[j + 1] = M[j];
                            j--;
                        }
                        M[j + 1] = aux;
                    }
                    cout << "Vector ordenado Descendente por Método de Inserción: ";
                    break;
                default:
                    cout << "Opción no válida." << endl;
                    break;
                }
                
                break;
            case 3: // Método Bandera
                cout << "Seleccione el orden que desea:" << endl;
                cout << "1. Ascendente" << endl;
                cout << "2. Descendente" << endl;
                cout << "Ingrese su opción: ";
                cin >> opcionS;
                cout << endl;
                switch (opcionS)
                {
                case 1: // Ascendente
                    for (int i = 0; i < dimension - 1; i++) {
                        bool cambio = false;
                        for (int j = 0; j < dimension - i - 1; j++) {
                            if (M[j] > M[j + 1]) {
                                aux = M[j];
                                M[j] = M[j + 1];
                                M[j + 1] = aux;
                                cambio = true;
                            }
                        }
                        if (!cambio) break; // Si no hubo intercambio, el vector ya está ordenado
                    }
                    cout << "Vector ordenado Ascendente por Método Bandera: ";
                    break;
                case 2: // Descendente
                    for (int i = 0; i < dimension - 1; i++) {
                        bool cambio = false;
                        for (int j = 0; j < dimension - i - 1; j++) {
                            if (M[j] < M[j + 1]) {
                                aux = M[j];
                                M[j] = M[j + 1];
                                M[j + 1] = aux;
                                cambio = true;
                            }
                        }
                        if (!cambio) break; // Si no hubo intercambio, el vector ya está ordenado
                    }
                    cout << "Vector ordenado Descendente por Método Bandera: ";
                    break;
                default:
                    cout << "Opción no válida." << endl;
                    break;
                }
                
                break;
            default:
                break;
        }
        // Imprimir el vector ordenado
        cout << "Vector ordenado: ";
        cout << endl;
        for (int i = 0; i < dimension; i++) {
        cout << "[" << M[i] << "] ";
        }
        cout << endl;
        cout << "¿Desea repetir el proceso? (S/N): ";
        cin >> seguir;
    }
    return 0;
}