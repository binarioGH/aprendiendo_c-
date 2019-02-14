#include <iostream>
#include <string>
using namespace std;
int countVowels(string text);
bool isVowel(char letter);
int main(){
	string phrase;
	int vocales;
	cout<<"Ingresa un string: ";
	getline(cin, phrase);
	vocales = countVowels(phrase);
	cout<<"Total de vocales: "<<vocales;
	return 0;
}
int countVowels(string text){
	int i, total=0;
	for(i=0;i<text.length();i++){
		if(isVowel(text[i])){
			total ++;
		}
	}
	return total;
}
bool isVowel(char letter){
	string vowels="aeiouAEIOU";
	int i;
	for(i=0;i<vowels.length();i++){
		if(letter == vowels[i]){
			return true;
		}
	}
	return false;
}