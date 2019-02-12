#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cout<<"Ingresa un string: ";
	getline(cin, str);
	short  i = 0;
	for(i;i<str.length();i++){
		cout<<str[i]<<"\n";
	}
	return 0;
}