
/*

5)	Cargar una matriz A con cualquier número positivo menor a 10. Hallar el mayor, menor elemento de cada fila y el promedio de cada columna.
(Considerar los vectores Men, May y P)

*/
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(0)); // Inicializar la semilla para números aleatorios
    
    int filasA, columnasA;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filasA;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnasA;
    int A[filasA][columnasA];
    vector<int> May(filasA); // Vector para la sumatoria de filas
    vector<int> Men(filasA); // Vector para la sumatoria de columnas
    vector<double> P(columnasA); // Vector para el promedio de columnas
    // Inicializar la matriz A
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            cout << "Ingrese el elemento A[" << i << "][" << j << "]: ";
            A[i][j] = rand() % 10; // Generar un número aleatorio positivo menor a 10
        }
    }
    // Calcular el mayor y menor elemento de cada fila, y el promedio de cada columna
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            // Calcular el mayor elemento de la fila
            if (j == 0 || A[i][j] > May[i]) {
                May[i] = A[i][j];
            }
            // Calcular el menor elemento de la fila
            if (j == 0 || A[i][j] < Men[i]) {
                Men[i] = A[i][j];
            }
            // Calcular la sumatoria para el promedio de columnas
            P[j] += A[i][j];
        }
    }
    // Calcular el promedio de cada columna
    for (int j = 0; j < columnasA; j++) {
        P[j] /= filasA; // Promedio de la columna j
    }
    // Mostrar la matriz A
    cout << "Matriz A:" << endl;
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    // Mostrar los resultados
    cout << "Mayor elemento de cada fila:" << endl;
    for (int i = 0; i < filasA; i++) {
        cout << "Fila " << i << ": " << May[i] << endl;
    }
    cout << "Menor elemento de cada fila:" << endl;

    for (int i = 0; i < filasA; i++) {
        cout << "Fila " << i << ": " << Men[i] << endl;
    }
    cout << "Promedio de cada columna:" << endl;
    for (int j = 0; j < columnasA; j++) {
        cout << "Columna " << j << ": " << P[j] << endl;
    }
    return 0;
}