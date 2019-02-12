#include <iostream>
using namespace std;
int main(){
	//la suma de 3 numeros consecutivos da 72 ¿cual es el numero más pequeño de estos?
	int i, num;
	cout<<"Ingresa el numero: ";cin>>num;
	for(i=1;i < num; i++){
		cout<<"----------";
		cout<<"\n"<<i<<"\n"<<i+1<<"\n"<<i + 2<<"\n";
		if(i + (i+1) + (i + 2) == num){
			break;
		}

	}
	return 0;
}