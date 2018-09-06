#include <iostream>
using namespace std;
/*Una tarea que me dejarón en algebra de determinar en que parte 2 planes
de telefono valen lo mismo, un plan vale 0.15 centavos de dolar por minuto y el otro
40 por mes + 0.5 por minuto.*/
int main(){
	float p1=0.15, p2=0.5;
	int i=1;
	while(p1 != p2){
		p1 = 0.15 * i;
		p2 = 40 + (0.05 * i);
		cout<<"\nMinutos: "<<i<<"\nPlan 1: "<<p1<<"\nPlan 2: "<<p2;
		i++;
	}
	
	return 0;
}