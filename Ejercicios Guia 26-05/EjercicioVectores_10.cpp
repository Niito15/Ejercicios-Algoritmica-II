/*
10)	Crear y cargar un vector M. Asegurarse de que ningún elemento del vector sea repetido. Imprimir el vector.
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
    cout << "Ingrese el tamaño del vector:" << endl;
    cin >> dimension;
    vector<int> M(dimension);
    
    // Cargar el vector M con números aleatorios
    for (int i = 0; i < dimension; i++) {
        M[i] = rand() % 30 + 1;
    }

    // Asegurarse de que no haya elementos repetidos
    for (int i = 0; i < dimension - 1; i++) {
        for (int j = i + 1; j < dimension; j++) {
            if (M[i] == M[j]) {
                // Si hay repetidos, generar un nuevo número aleatorio
                M[j] = rand() % 30 + 1;
                j = i; // Reiniciar el ciclo para verificar desde el inicio
            }
        }
    }

    // Imprimir el vector M
    cout << "Vector M: ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << M[i] << "] ";
    }
    
    cout << endl;
    return 0;
}