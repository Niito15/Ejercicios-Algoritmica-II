
/*

6)	Cargar los elementos de una matriz B. realizar un resumen sobre los elementos de la diagonal principal según se muestra en la figura.
Imprimir la matriz y los datos hallados. (Prueba de Escritorio)

*/
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(0)); // Inicializar la semilla para números aleatorios
    int dimension;
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
    // Calcular la diagonal principal y sus estadísticas
    for (int i = 0; i < dimension; i++) {
        diagonal[i] = B[i][i]; // Almacenar el elemento de la diagonal
    }
    // Mostrar la matriz B
    cout << "Matriz B:" << endl;
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            cout << "[" << B[i][j] << "] ";
        }
        cout << endl;
    }
    // Mostrar los elementos de la diagonal principal
    cout << "Elementos de la diagonal principal: ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << diagonal[i] << "] ";
    }
    return 0;
}