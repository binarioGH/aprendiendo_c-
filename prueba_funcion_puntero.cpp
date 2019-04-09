#include <iostream>
using namespace std;

void hola(void);
void adios(void);
void hacer(void (*funct) ());

int main(){
	int d;
	void (*ptr_do) (void) = NULL;
	cout<<"1:Hola\n2:Adios\n-->\n";
	cin>>d;
	if(d == 1){
		ptr_do = hola;
	}
	else{
		ptr_do = adios;
	}
	hacer(ptr_do);

	return 0;
}
void hola(void){
	cout<<"\nHola mundo\n";
	return;
}
void adios(void){
	cout<<"\nAdios, amigo\n";
	return;
}
void hacer(void (*funct) ()){
	funct();
	return;
}