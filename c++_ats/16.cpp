#include <iostream>
using namespace std;
int main(){
	int edad;
	cout<<"Ingresa tu edad: ";cin>>edad;
	if(edad >= 18 && edad <= 25){
		cout<<"Estas en el rango de edad entre 18 y 25";
	}
	else{
		cout<<"No estas en el rango de edad entre 18 y 25";
	}
	return 0;
}