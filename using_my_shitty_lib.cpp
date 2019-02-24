#include <iostream>
#include "stringfuncs.cpp"
using namespace std;
int main(){
	char word[20], tofind;
	cout<<"Ingresa una palabra con mayusculas y minusculas: ";
	cin>>word;
	cout<<"Ingresa una letra que quieras encontrar";
	cin>>tofind;
	cout<<"Index: "<<findChar(word, tofind)<<endl;
	cout<<"Upper: "<<upper(word)<<endl;
	cout<<"Lower: "<<lower(word);
	return 0;
}