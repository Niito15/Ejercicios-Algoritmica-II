
/*

3)	Crear y cargar una matriz A y a su vez dos vectores SF (Sumatoria de Filas) y SC (Sumatoria de Columnas) los cuales contendrán la sumatoria de filas y
columnas correspondientes a la matriz A, como se muestra en la figura. Imprimir las estructuras de datos. (Prueba de Escritorio)

*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int filasA, columnasA;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filasA;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnasA;
    vector<int> SF(filasA); // Vector para la sumatoria de filas
    vector<int> SC(columnasA); // Vector para la sumatoria de columnas
    int A[filasA][columnasA];
    // Inicializar la matriz A
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            cout << "Ingrese el elemento A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Inixializar contadores de sumatorias
    for (int i = 0; i < filasA; i++) {
        SF[i] = 0; // Inicializar sumatoria de filas
    }
    for (int j = 0; j < columnasA; j++) {
        SC[j] = 0; // Inicializar sumatoria de columnas
    }
    // Calcular la sumatoria de filas y columnas
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            SF[i] += A[i][j]; // Sumar elementos de la fila i
            SC[j] += A[i][j]; // Sumar elementos de la columna j
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
    // Imprimir la sumatoria de filas
    cout << "Sumatoria de Filas (SF):" << endl;
    for (int i = 0; i < filasA; i++) {
        cout << "SF[" << i << "] = " << SF[i] << endl;
    }
    // Imprimir la sumatoria de columnas
    cout << "Sumatoria de Columnas (SC):" << endl;
    for (int j = 0; j < columnasA; j++) {
        cout << "SC[" << j << "] = " << SC[j] << endl;
    }
    
    return 0;
}