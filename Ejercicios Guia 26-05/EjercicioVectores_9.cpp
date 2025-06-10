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
        for (int j = 0; j <= i; j++) {
            while (M[i] == M[j]) {
                M[i] = rand() % 30 + 1;
            }
        }
    }

    // Imprimir el vector M
    cout << "Vector M (ordenado): ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << M[i] << "] ";
    }
    
    cout << endl;
    return 0;
}