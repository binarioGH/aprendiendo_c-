#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	map<string, string> asociativo;
	asociativo["uno"] = "manzana";
	asociativo["dos"] = "pera";
	char clave[3];
	cout<<"Ingresa la clave que quieres: ";
	cin>>clave;
	cout<<asociativo[clave];
	return 0;
}