#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string encode(string plain_text, string key), encoded;
int find(string text, char tofind);
int main(){
	string key, text;
	cout<<"Ingresa tu texto: ";
	getline(cin, text);
	cout<<"Ingresa la clave: ";
	cin>>key;
	encoded =  encode(text, key);
	cout<<"Tu texto encriptado:\n"<<encoded;
	return 0;
}
string encode(string plain_text, string key){
	string encrypted("");
	string abc("abcdefghijklmnopqrstuvwxyz");
	short keyindex = 0, i = 0,keyencodeindex,encodeindex, index;
	for(i;i<plain_text.length();i++){
		if(isalpha(plain_text[i])){
			keyencodeindex = find(abc, key[keyindex]);
			encodeindex = find(abc, tolower(plain_text[i]));
			index = encodeindex - keyencodeindex;
			if(index < 0){
				index += abc.length();
			}
			encrypted += abc[index];
		}
		else{
			encrypted+= plain_text[i];
		}
		keyindex += 1;
		if(keyindex >= key.length()){
			keyindex = 0;
		}
	}
	return encrypted;
}
int find(string text, char tofind){
	int index = 0;
	for(index;index<text.length();index++){
		if(text[index]==tofind){
			return index;
		}
	}
	return -1;
}