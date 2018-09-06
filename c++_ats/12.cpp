#include <iostream>
using namespace std;
int main(){
	int n[3], i, max = 0;
	cout<<"Ingresa 3 numeros: ";cin>>n[0]>>n[1]>>n[2];
	for(i=0;i<3;i++){
		if(n[i] >= max){
			max = n[i];
		}
	}
	cout<<"El mayor es "<<max;
	return 0;
}