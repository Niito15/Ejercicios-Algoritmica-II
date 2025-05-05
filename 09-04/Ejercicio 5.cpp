/*
5)	Ingresar tantos números como se desee hasta leer dos numeros consecutivos.
Indica cuantos números fueron ingresados, además encontrar el mayor y menor
número encontrado e imprimir la tabla de multiplicar del menor, solo si este es
un número positivo, en caso de negativo, enviar un mensaje indicando
“El número es negativo o igual a cero”.
*/
#include <iostream>
using namespace std;
int main() {
    int num, prevNum, count = 1, minNum, maxNum;
    cout << "Ingrese numeros (dos consecutivos para terminar): " << endl;
    cin >> num;
    prevNum = num;
    minNum = num;
    maxNum = num;
   do {
        cin >> num;
        count++;
        if (num < minNum) {
            minNum = num; // Actualizar el mínimo
        }
        if (num > maxNum) {
            maxNum = num; // Actualizar el máximo
        }
    } while (num != prevNum); // Termina cuando se ingresan dos números consecutivos

    cout << "Cantidad de numeros ingresados: " << count << endl;
    cout << "Numero menor: " << minNum << endl;
    cout << "Numero mayor: " << maxNum << endl;

    if (minNum > 0) { // Verificar si el número mínimo es positivo
        cout << "Tabla de multiplicar del menor (" << minNum << "):" << endl;
        for (int i = 1; i <= 10; i++) {
            cout << minNum << " x " << i << " = " << minNum * i << endl;
        }
    } else {
        cout << "El numero es negativo o igual a cero." << endl;
    }
    return 0;
}