/*
7)	Crear y cargar un vector N con dimensión par. Ordenar los elementos del vector de la siguiente forma; la primera mitad en forma
ascendente y la segunda mitad en forma descendente. Imprimir el vector antes y después de ordenar
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
    // Solicitar al usuario la dimensión del vector
    cout << "Ingrese la dimensión del vector (debe ser un número par): ";
    cin >> dimension;
    // Validar que la dimensión sea par
    while (dimension % 2 != 0) {
        cout << "La dimensión debe ser un número par. Intente nuevamente: ";
        cin >> dimension;
    }
    vector<int> N(dimension);
    // Cargar el vector N con números aleatorios
    for (int i = 0; i < dimension; i++) {
        N[i] = rand() % 30 + 1;
    }
    // Imprimir el vector N antes de ordenar
    cout << "Vector M (antes de ordenar): ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << N[i] << "] ";
    }
    cout << endl;
    // Ordenar la primera mitad del vector en forma ascendente
    for (int i = 0; i < dimension / 2 - 1; i++) {
        for (int j = i + 1; j < dimension / 2; j++) {
            if (N[i] > N[j]) {
                aux = N[i];
                N[i] = N[j];
                N[j] = aux;
            }
        }
    }
    // Ordenar la segunda mitad del vector en forma descendente
    for (int i = dimension / 2; i < dimension - 1; i++) {
        for (int j = i + 1; j < dimension; j++) {
            if (N[i] < N[j]) {
                aux = N[i];
                N[i] = N[j];
                N[j] = aux;
            }
        }
    }
    // Imprimir el vector M
    cout << "Vector M (ordenado): ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << N[i] << "] ";
    }
    cout << endl;
    return 0;
}