#include <iostream>
#include <string>
using namespace std;
string translate(string w, int k);
int find(string search, char tofind);
int main(int nNumberofArgs, char* pszArgs[]){
	short key;
	string word, translated;
	cout<<"Ingresa el texto: ";
	getline(cin, word);
	cout<<"Ingresa la llave: ";
	cin>>key;
	translated = translate( word, key);
	cout<<"texto encriptado: "<<translated;
	return 0;
}
string translate(string w, int k){
	string abc ("abcdefghijklmnopqrstuvwxyz"), encoded ("");
	int index = 0, encodedindex;
	for(index;index<w.length();index++){
		encodedindex = find(abc, w[index]);
		if(encodedindex==-1){
			encoded += w[index];
		}
		else{
			if(encodedindex-k < 0){
				encodedindex+= abc.length();
			}
			encoded += abc[encodedindex - k];
		}
	}
	return encoded;
}

int find(string search, char tofind){
	int index = 0;
	for(index;index<search.length();index++){
		if(search[index] == tofind){
			return index;
		}
	}
	return -1;
}