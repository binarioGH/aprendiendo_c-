#include <iostream>
using namespace std;
class Rectangulo{
    private:
    	int l;
    	int a;
    public:
    	Rectangulo(int, int);
    	void perimetro();
    	void area();
};
Rectangulo::Rectangulo(int _l, int _a){
	l = _l;
	a = _a;
}
void Rectangulo::perimetro(){
	int p = l*4;
	cout<<"El perimetro es de "<<p<<"\n";
}
void Rectangulo::area(){
	int ar = (l*2)+(a*2);
	cout<<"El area es de "<<ar<<"\n";
}
int main(){
	int largo, alto;
	cout<<"Ingresa lo largo del rectangulo: ";cin>>largo;
	cout<<"Ingresa lo alto del rectangulo: ";cin>>alto;
	Rectangulo r(largo, alto);
	r.perimetro();
	r.area();
	return 0;
}