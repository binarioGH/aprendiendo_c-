#include <iostream>
#include <string>
using namespace std;
int main(){
	string text, text2 ("PRUEBA");
	cout<<"Agrega un texto para annadir al string "<<text2<<" :";
	getline(cin, text);
	text2 += text;
	cout<<text2;
	return 0;
}