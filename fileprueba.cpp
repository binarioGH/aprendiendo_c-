#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int nArgs, char* argv[]){
	string fName;
	if(argv[1] == NULL){
		fName="Ningun archivo";
	}
	else{
		fName=argv[1];
	}
	cout<<"Leyendo "<<fName<<endl;
	ifstream file;
	string line;
	int op;
	file.open(argv[1], ios::in); //ios::in es modo lectura
	if(file.fail()){
		cout<<"\nNo se pudo abrir el archivo.";
		exit(1);
	}
	while(!file.eof()){
		getline(file, line);
		cout<<line<<endl;
	}
	file.close();
	return 0;
}