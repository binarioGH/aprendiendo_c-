#include <iostream>
using namespace std;
int main(int nArgs, char* argv[]){
	int i = 1; 
	for(i;i<nArgs;i++){
		cout<<"Argumento: "<<argv[i]<<endl;
	}
	return 0;
}