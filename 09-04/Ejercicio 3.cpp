/*
3)	Ingresar tantos números como se desee hasta un número ingresado previamente. 
Indicar cuantos números fueron ingresados y el promedio de los pares e impares encontrados.
Observación: calcular el promedio”, el promedio es simplemente una sumatoria de todos
los elementos involucrados dividido la cantidad de elementos.
Ejemplo: promedio = suma/cantidad
Además, no olviden que las variables pueden actuar como un:
-	Contador: variable = variable + constante . Ejemplo: c = c + 1;
-	Sumador: variable = variable + variable(a incrementar) . Ejemplo= s = s+ n;
*/
#include <iostream>
using namespace std;
int main() {
    int num, numTerminar, cont = 0,  cantPares= 0, cantImpares = 0, sumaTotal=0;
    float promedioTotal = 0, promedioPares = 0, promedioImpares = 0;
    cout << "Ingrese un numero para terminar el ingreso: ";
    cin >> numTerminar;
    cout << "Ingrese un numero: ";
    cin >> num;
    while (num != numTerminar) {
        cont++;
        sumaTotal += num;
        if (num % 2 == 0) {
            cantPares++;
        } else {
            cantImpares++;
        }
        cout << "Ingrese un numero: ";
        cin >> num;
    }
    if (cont > 0) {
        promedioTotal = sumaTotal / cont;
        if (cantPares > 0) {
            promedioPares /= cantPares;
        }
        if (cantImpares > 0) {
            promedioImpares /= cantImpares;
        }
    }
    cout << "Cantidad de numeros ingresados: " << cont << endl;
    cout << "Promedio total: " << promedioTotal << endl;
    cout << "Promedio de pares: " << promedioPares << endl;
    cout << "Promedio de impares: " << promedioImpares << endl;
    return 0;
}