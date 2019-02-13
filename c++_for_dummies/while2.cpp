#include <iostream>
using namespace std;

int numbers(void);
void display(void){
	cout<<"Tienes que hacer un programa que sume"<< endl;
	cout<<"numeros ingresos por el usuario hasta que"<< endl;
	cout<<"el usuario ingrese un numero negativo."<<endl;
	return;
}
int main(int nNumberofArgs, char* pszArgs[]){
	display();
	int n1, n2;
	n1 = numbers();
	n2 = numbers();
	cout<<"La suma es: "<<n1+n2;
	return 0;
}

int numbers(void){
	int acumulador=0, num=1;
	while(num>0){
		cout<<"Ingresa un numero: ";
		cin>>num;
		acumulador += num;
	}
	return acumulador;
}