#include <iostream>
#include <windows.h>
#include <thread>  
using namespace std;
void saludar(void);
int main(){
	Thread hilo (saludar);
	hilo.join(); 
	int i = 0;
	for(i;i<5;i++){
		cout<<"Hola, soy la funcion main.\n";
		Sleep(2000);
	}
	return 0;
}
void saludar(void){
	Sleep(5000);
	cout<<"Hola, soy la funcion saludar.\n";
	return;
}