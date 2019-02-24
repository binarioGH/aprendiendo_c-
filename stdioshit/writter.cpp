#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
void init(string file);
int main(int nArgs, char* argv[]){
	init(argv[1]);
	return 0; 
}
void init(string file){
	FILE * myfile;
	myfile = fopen(file, 'w');
	char linea[255];
	cout<<"Escribe";
	cin.getline(linea, sizeof(linea));
	fputs(linea, myfile);
	fclose(myfile);
	return;
}