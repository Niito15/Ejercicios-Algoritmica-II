#include <iostream>
using namespace std;
int main(){
	int num1, num2, opcion;
	cout<<"Ingrese dos numeros para calcular la suma, resta, division o producto de ellos"<<endl;
	cin>>num1;
	cin>>num2;
	do{
		cout<<"Menu de opciones: "<<endl
		<<"1. Suma"<<endl
		<<"2. Resta"<<endl
		<<"3. MUltiplicaCION"<<endl
		<<"4. Division"<<endl
		<<"5. Salir del programa"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
				break;
			case 2:
				cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
				break;
			case 3:
				cout<<num1<<" x "<<num2<<" = "<<num1*num2<<endl;
				break;
			case 4:
				cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
				break;
			case 5:
				cout<<"Gracias por perder su tiempo con este programa. Jodete mamañema";
				break;
			default:
				cout<<"No elegiste algo valido, por consecuensia, eres InVaLiDo, JAJAJAJAJAJAJAAJAJAJAJAJAJAJAA"<<endl;
				break;
		}
	}while (opcion!=5);
	return 0;
}
