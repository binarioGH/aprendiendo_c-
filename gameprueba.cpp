#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int vida = 100, evida = 100, rnd, rnd2;
	srand(time(NULL));
	
	while(vida > 0 && evida > 0){
		rnd = 1+rand()%(11-1);
		cout<<vida<<"  "<<evida<<endl;
		rnd2 = 1+rand()%(3-1);
		if(rnd2 == 2){
			evida -= rnd;
		}
		else{
			vida -= rnd;
		}


	}
	return 0;
}