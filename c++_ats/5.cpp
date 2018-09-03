#include <iostream>

using namespace std;

int main(){
	int num;
	float iva, total;
	cout<<"Ingresa el precio de un producto: ";cin>>num;
	iva = num * 0.16;
	total = iva + num;
	cout<<"El precio con iva es "<<total;	
	return 0;
}