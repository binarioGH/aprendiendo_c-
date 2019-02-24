#include <iostream>
#include <string>
using namespace std;


int findChar(string text, char tofind);
string turninto_U_L(string abc, string text);
string lower(string str);
string upper(string str);

int findChar(string text, char tofind){
	int iter = 0;
	for(iter;text[iter] != '\0';iter++){
		if(text[iter] == tofind){
			return iter;
		}
	}
    return -1;
}
string turninto_U_L(string abc, string text){
	string new_string = '\0';
	int i, index;
	string oppsite_abc;
	if(abc[0] == 'A'){
		oppsite_abc = "abcdefghijklmnopqrstuvwxyz";
	}
	else{
		 oppsite_abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	}
	for(i=0; text[i] != '\0'; i++){
		index = findChar(oppsite_abc, text[i]);
		if(index == -1){
			new_string += text[i];
			continue;
		}
		new_string += abc[index];
	}
	return new_string;
}
string lower(string str){
	return turninto_U_L("abcdefghijklmnopqrst", str);
}
string upper(string str){
	return turninto_U_L("ABCDEFGHIJKLMNOPQRSTUVWXYZ", str);
}