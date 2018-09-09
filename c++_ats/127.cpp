#include <iostream>
using namespace std;
class Persona{
    private:
    	int edad;
    	string nombre;
    public:
    	Persona(int,string);
    	void leer();
    	void correr();
};
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}
void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo.\n";
}
void Persona::correr(){
	cout<<"Soy "<<nombre<<" y estoy corriendo.\n";
}

int main(){
	Persona p1(15, "Diego"), p2(17, "Maria");
	p1.leer();
	p2.correr();
	return 0;
}