#include <iostream>
using namespace std;
class Fecha{
    private:
	    int dia, mes, anio;
    public:
    	Fecha(int, int, int);
    	Fecha(long);
    	void mf();
};
Fecha::Fecha(int _dia, int _mes, int _anio){
	dia = _dia;
	mes = _mes;
	anio = _anio;
}
Fecha::Fecha(long fecha){
	anio = int(fecha/10000);
	mes = int((fecha - anio*10000)/100);
	dia = int(fecha - anio * 10000-mes *100);
}
void Fecha::mf(){
	cout<<mes<<"/"<<dia<<"/"<<anio<<"\n";
}
int main(){
	Fecha hoy(9, 9,18);
	Fecha ayer(20180907);
	hoy.mf();
	ayer.mf();
	return 0;
}