
/*

7)	Crear una matriz B y un vector DS. Cargar el vector DS con los elementos de la diagonal secundaria de la matriz. Ordenar el vector en forma Ascendente y Descendente.
Imprimir las estructuras de datos (Imprimir el vector antes y después de cada proceso de orden)
*/
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(0)); // Inicializar la semilla para números aleatorios
    int dimension, aux;
    cout << "Ingrese el numero de filas y columnas de la matriz: ";
    cin >> dimension;
    int B[dimension][dimension];
    vector<int> diagonal(dimension); // Vector para almacenar los elementos de la diagonal principal
    
    // Inicializar la matriz B
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            B[i][j] = rand() % 50 + 1; // Generar un número aleatorio positivo menor a 10
        }
    }
    // Calcular la diagonal secundaria
    for (int i = 0; i < dimension; i++) {
        diagonal[i] = B[i][dimension - 1 - i]; // Almacenar el elemento de la diagonal
    }
    // Mostrar la matriz B
    cout << "Matriz B:" << endl;
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            cout << "[" << B[i][j] << "] ";
        }
        cout << endl;
    }
    // Mostrar los elementos de la diagonal secundaria
    cout << "Elementos de la diagonal secundaria (Antes de ordenar): ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << diagonal[i] << "] ";
    }
    cout << endl;
    // Ordenar el vector en forma ascendente
    for (int i = 0; i < dimension - 1; i++) {
        for (int j = 0; j < dimension - i - 1; j++) {
            if (diagonal[j] > diagonal[j + 1]) {
                aux = diagonal[j];
                diagonal[j] = diagonal[j + 1];
                diagonal[j + 1] = aux;
            }
        }
    }
    // Mostrar el vector después de ordenar en forma ascendente
    cout << "Elementos de la diagonal secundaria (Orden Ascendente): ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << diagonal[i] << "] ";
    }
    cout << endl;
    // Ordenar el vector en forma descendente
    for (int i = 0; i < dimension - 1; i++) {
        for (int j = 0; j < dimension - i - 1; j++) {
            if (diagonal[j] < diagonal[j + 1]) {
                aux = diagonal[j];
                diagonal[j] = diagonal[j + 1];
                diagonal[j + 1] = aux;
            }
        }
    }
    // Mostrar el vector después de ordenar en forma descendente
    cout << "Elementos de la diagonal secundaria (Orden Descendente): ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << diagonal[i] << "] ";
    }
    return 0;
}