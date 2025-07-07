
/*

1)	Crear y cargar un vector N cuyos elementos no deben estar repetidos. Imprimir el vector.

*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> N;
    int dimension;
    cout << "Ingrese la dimension del vector: ";
    cin >> dimension;
    cout << "Ingrese " << dimension << " elementos distintos para el vector:\n";
    for (int i = 0; i < dimension; ++i) {
        cin >> N[i];
        // Verificamos que no se haya utilizado ya un elemento repetido
        if (i != 0) {
            for (int j = 0; j < i; ++j) {
                if (N[i] == N[j]) {
                    cout << "El elemento " << N[i] << " ya ha sido ingresado. Por favor, ingrese un elemento distinto.\n";
                    --i; // Decrementamos i para repetir la iteración
                    cin >> N[i]; // Volvemos a pedir el elemento
                    j = -1; // Reiniciamos j para verificar desde el inicio
                }
            }
        }
    }
    // Imprimimos el vector
    cout << "El vector ingresado es:\n";
    for (int i = 0; i < dimension; ++i) {
        cout << "[" << N[i] << "] ";
    }
    cout << endl;
    return 0;
}