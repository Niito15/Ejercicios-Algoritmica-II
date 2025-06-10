/*
8)	Crear un pseudocódigo para cargar un vector de 15 posiciones y luego calcular e imprimir el producto de los elementos que estén en las posiciones
impares del vector. Posteriormente ordenar descendentemente el vector mediante el método de burbuja.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int main() {
    srand(time(0));
    int aux = 0;
    const int dimension = 15; // Definir la dimensión del vector
    int productoPosImpar = 1;
    vector<int> N(dimension);
    // Cargar el vector N con números aleatorios
    for (int i = 0; i < dimension; i++) {
        N[i] = rand() % 30 + 1;
        if ((i + 1) % 2 != 0) {
            productoPosImpar = productoPosImpar * N[i];
        }
    }
    // Imprimir el producto de los elementos en las posiciones impares del vector
    cout << "El producto de los elementos en las posiciones impares del vector es: " << productoPosImpar << endl;
    cout << endl;
    // Imprimir el vector N antes de ordenar
    cout << "Vector N (antes de ordenar): ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << N[i] << "] ";
    }

    cout << endl;
    // Ordenar el vector en forma descendente
    for (int i = 0; i < dimension - 1; i++) {
        for (int j = 0; j < dimension - i - 1; j++) {
            if (N[j] < N[j + 1]) {
                aux = N[j];
                N[j] = N[j + 1];
                N[j + 1] = aux;
            }
        }
    }
    // Imprimir el vector M
    cout << "Vector N (ordenado): ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << N[i] << "] ";
    }
    cout << endl;
    return 0;
}