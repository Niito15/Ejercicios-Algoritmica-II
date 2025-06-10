/*
6)	Crear y cargar un vector M con números al azar hasta 30. Invertir los elementos del vector. Imprimir el vector antes y después de invertir.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int main() {
    srand(time(0));
    int aux = 0;
    const int dimension = 5;
    vector<int> M(dimension);
    // Cargar el vector M con números aleatorios
    for (int i = 0; i < dimension; i++) {
        M[i] = rand() % 30 + 1;
    }
    // Imprimir el vector M antes de ordenar
    cout << "Vector M (antes de ordenar): ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << M[i] << "] ";
    }
    cout << endl;
    // Invertir los elementos del vector M
    for (int i = 0; i < dimension / 2; i++) {
        aux = M[i];
        M[i] = M[dimension - 1 - i];
        M[dimension - 1 - i] = aux;
    }
    // Imprimir el vector M
    cout << "Vector M (ordenado): ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << M[i] << "] ";
    }
    cout << endl;
    return 0;
}