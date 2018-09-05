#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Ingresa un numero: ";cin>>num;
	switch(num){
		case 1:cout<<"El numero es 1";break;
		case 2:cout<<"El numero es 2";break;
		case 3:cout<<"El numero es 3";break;
		default:cout<<"No esta entre 1 y 3";break;
	}
	return 0;
}