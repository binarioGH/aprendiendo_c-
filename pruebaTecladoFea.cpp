#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	char chr;
	while(true){
		if(kbhit()){
			chr = getch();
			cout<<"The key "<<chr<<" was pressed down.\n";
		}
	}
	return 0;
}