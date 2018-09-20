#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void sleep(int m){
	m *= 1000;
	Delay(m);
}
int main(){
	int h,m,s;
	for(h=0;h<=24;h++){
		for(m=0;m<=60;m++){
			for(s=0;s<=60;s++){
				system("cls");
				cout<<"Tiempo: "<<h<<":"<<m<<":"<<s;
				sleep(1);
			}
		}
	}
	return 0;
}