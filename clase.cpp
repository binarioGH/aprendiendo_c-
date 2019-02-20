#include <iostream>
#include <string>
using namespace std;
class Persona{
private:
	int edad;
	string nombre;
public:
	Persona(int _edad, string _nombre);
	void saludar();
};
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}
void Persona::saludar(void){
	cout<<"Hola, soy "<<nombre<<" y tengo "<<edad<<" a"<<(char)164<<"os."<<endl;
}
int main(){
	Persona p1 = Persona(20, "Juan");
	p1.saludar(); 
	return 0;
}