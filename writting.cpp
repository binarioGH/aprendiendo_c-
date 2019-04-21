#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int nArgv, char* argv[]){
	string fName;
	string line;
	if(argv[1] == NULL){
		fName = "";
	}
	else{
		fName = argv[1];
	}
	ofstream file;
	file.open(fName, ios::out);
	if(file.fail()){
		cout<<"Error al abrir el archivo";
		exit(1);
	}
	while(true){
		cout<<"->";
		getline(cin, line);
		if(line == "exit"){
			break;
		}
		file<<line<<endl;
	}
	file.close();
	return 0;
}