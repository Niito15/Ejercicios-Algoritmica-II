/*
4)	Crea un pseudocódigo que cargue un vector de 5 elementos y luego lo
ordene descendentemente utilizando el método de burbuja. Imprimir el vector antes y después de ordenar.
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
    vector<int> vectorNumeros(dimension);
    // Carga el vector con números aleatorios
    for (int i = 0; i < dimension; i++) {
        vectorNumeros[i] = rand() % 20 + 1;
    }
    // Imprime el vector antes de ordenar
    cout << "Vector antes de ordenar: ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << vectorNumeros[i] << "] ";
    }
    cout << endl;
    // Ordena el vector utilizando el método de burbuja
    for (int i = 0; i < dimension - 1; i++) {
        for (int j = 0; j < dimension - i - 1; j++) {
            if (vectorNumeros[j] < vectorNumeros[j + 1]) {
                aux = vectorNumeros[j];
                vectorNumeros[j] = vectorNumeros[j + 1];
                vectorNumeros[j + 1] = aux;
            }
        }
    }
    // Imprime el vector después de ordenar
    cout << "Vector después de ordenar: ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << vectorNumeros[i] << "] ";
    }
    return 0;
}