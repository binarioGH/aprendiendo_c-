#include <iostream>
using namespace std;
int main(int nNumberofArgs, char* pszArgs[]){
	cout.setf(cout.boolalpha);
	short n1, n2;
	bool b;
	cout<<"Input the value of n1: ";
	cin>>n1;
	cout<<"Input the value of n2: ";
	cin>>n2;
	b = n1 == n2;
	cout<<"Our statement "<<n1<<"=="<<n2<<" is "<<b; 
	return 0;
}