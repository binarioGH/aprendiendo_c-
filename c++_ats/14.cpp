#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Ingresa un numero: ";cin>>num;
	if(num > 0){
		cout<<"Es un numero positivo.";
	}
	else if(num < 0){
		cout<<"Es un numero negativo.";
	}
	else{
		cout<<"Es 0.";
	}
	return 0;
}