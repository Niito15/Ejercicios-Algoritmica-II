
/*

4)	Crear y cargar una matriz A y los vectores M3 y CP que tendrán M3 = Cantidad de múltiplos de 3 mayores que 6 y CP = Cantidad de elementos pares, todos de la
matriz A. Imprimir las estructuras de datos.

*/
#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<int> M3; // Vector para la sumatoria de filas
    vector<int> CP; // Vector para la sumatoria de columnas
    int filasA, columnasA;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filasA;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnasA;
    int A[filasA][columnasA];
    // Inicializar la matriz A
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            cout << "Ingrese el elemento A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Calcular M3 y CP
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            if (A[i][j] > 6 && A[i][j] % 3 == 0) {
                M3.push_back(A[i][j]); // Agregar múltiplos de 3 mayores que 6 al vector M3
            }
            if (A[i][j] % 2 == 0) {
                CP.push_back(A[i][j]); // Agregar elementos pares al vector CP
            }
        }
    }
    // Imprimir la matriz A
    cout << "Matriz A:" << endl;
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            cout << "[" << A[i][j] << "] ";
        }
        cout << endl;
    }
    // Imprimir el vector M3
    cout << "M3 (Múltiplos de 3 mayores que 6): ";
    for (int i = 0; i < M3.size(); i++) {
        cout << "[" << M3[i] << "] ";
    }
    cout << endl;
    // Imprimir el vector CP
    cout << "CP (Elementos pares): ";
    for (int i = 0; i < CP.size(); i++) {
        cout << "[" << CP[i] << "] ";
    }
    cout << endl;
    return 0;
}