#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingresa un numero: ";cin>>n;
	if(n%2==0){
		cout<<n<<" es par.";
	}
	else{
		cout<<n<<" es primo.";
	}
	return 0;
}