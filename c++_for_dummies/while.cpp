#include <iostream>
using namespace std;
int main(){
	short whilecount, count = 0;
	cout<<"Ingresa un numero: ";
	cin>>whilecount;
	while(count< whilecount){
		cout<<"Solo faltan "<<count<<" vueltas"<<endl;
		count+= 1;
	}
	return 0;
}