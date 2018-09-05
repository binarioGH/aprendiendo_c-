#include <iostream>
using namespace std;
int main(){
	int n1, n2;
	cout<<"Ingresa un numero: ";cin>>n1;
	cout<<"Ingresa otro numero: ";cin>>n2;
	if(n1 > n2){
		cout<<n1<<" es el mayor";
	}
	else if(n1 < n2){
		cout<<n2<<" es mayor";
	}
	else{
		cout<<"Son iguales.";
	}
	return 0;
}