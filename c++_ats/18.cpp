#include <iostream>
using namespace std;
int main(){

	int saldo = 1000, opc, ext,ret = 0;
	while(true){
		if(ret == 1){
			break;
		}
		cout<<"\n\tBienvenido a su cajero automatico\n";
		cout<<"Saldo total: "<<saldo<<"\n";
		cout<<"1.Ingresar dinero en cuenta\n2.Retirar dinero\n3.Salir\n";cin>>opc;
		
		switch(opc){
			case 1:
			cout<<"\nCuanto dinero quiere ingresar? ";
			cin>>ext;
			saldo += ext;
			break;
			case 2:
			cout<<"\nCuanto dinero quiere retirar? ";
			cin>>ext;
			saldo-= ext;
			break;
			case 3:
			ret = 1;
			break;
			default:cout<<"\nComando incorrecto.";break;
		}
	}

	return 0;
}