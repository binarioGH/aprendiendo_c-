#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	float t;
	cout<<"Ingresa el valor de a: ";cin>>a;
	cout<<"Ingresa el valor de b: ";cin>>b;
	cout<<"Ingresa el valor de c: ";cin>>c;
	cout<<"Ingresa el valor de d: ";cin>>d;
	a += b;
	c += d;
	t = a/c;
	cout<<"A+B/C+D = "<<t;
	return 0;
}