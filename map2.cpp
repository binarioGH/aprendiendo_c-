#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	map<string, string> mi_array;
	mi_array["uno"] = "manzana";
	mi_array["dos"] = "pera";
	mi_array["tres"] = "limon";
	map<string, string>::iterator iter;
	for(iter = mi_array.begin();iter!=mi_array.end();iter++){
		cout<<"Clave: "<<iter->first<<endl;
		cout<<"Valor:"<<iter->second<<endl;
	}

	return 0;
}