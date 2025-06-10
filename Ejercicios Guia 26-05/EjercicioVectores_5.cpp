/*
5)	Crear y cargar un vector B con no menos de 50 elementos, además, crear un vector N que tendrá los elementos de B
mayores que 20. Ordenar los elementos del vector B en forma creciente. Imprimir ambos vectores.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int main() {
    srand(time(0));
    int aux = 0;
    const int dimension = 50;
    vector<int> B(dimension);
    vector<int> N;
    // Cargar el vector B con números aleatorios entre 1 y 100
    for (int i = 0; i < dimension; i++) {
        B[i] = rand() % 100 + 1;
    }
    // Imprimir el vector B antes de ordenar
    cout << "Vector B (antes de ordenar): ";
    for (int i = 0; i < dimension; i++) {
        cout << B[i] << " ";
    }
    cout << endl;
    // Filtrar los elementos mayores que 20 y cargarlos en el vector N
    for (int i = 0; i < dimension; i++) {
        if (B[i] > 20) {
            N.push_back(B[i]);
        }
    }
    // Ordenar el vector B en forma creciente
    for (int i = 0; i < dimension - 1; i++) {
        for (int j = 0; j < dimension - i - 1; j++) {
            if (B[j] > B[j + 1]) {
                aux = B[j + 1];
                B[j + 1] = B[j];
                B[j] = aux;
            }
        }
    }
    // Imprimir el vector B
    cout << "Vector B (ordenado): ";
    for (int i = 0; i < dimension; i++) {
        cout << B[i] << " ";
    }
    cout << endl;
    // Imprimir el vector N
    cout << "Vector N (elementos mayores que 20): ";
    for (int i = 0; i < N.size(); i++) {
        cout << N[i] << " ";
    }
    cout << endl;
    return 0;
}