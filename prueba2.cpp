#include <iostream>
using namespace std;
int main(int nArgs,char* Args[]){
	if(nArgs < 3){
		cout<<"Uso: "<<Args[0]<<" entero1 entero2";
		return 0;
	}
	int n1, n2;
	n1 = atoi(Args[1]);
	n2 = atoi(Args[2]);
	cout<<n1+n2;
	return 0;
}
