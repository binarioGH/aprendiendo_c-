#include <iostream>
#include <string>
using namespace std;
void ask(string question,string opt[], int ans);
int points = 0;
struct test{
	string q;
	string answ[4];
	int resp;
}questions[100];
int main(){
	int nQuestions,i=0, e=0;
	int nAnswares;
	do{
		cout<<"Ingresa el numero de preguntas (maximo 100): ";
		cin>>nQuestions;
	}while(nQuestions>100);

	for(i;i<nQuestions;i++){
		cout<<"Ingresa tu pregunta: ";
		getline(cin, questions[i].q);
		for(e=0;e<4;e++){
			cout<<"Ingresa una opcion respuesta: ";
			getline(cin, questions[i].answ[e]);
			cout<<"Ingrese el numero de la respuesta correcta";
			cin>>questions[i].resp;
			}
	}
	for(i=0;i<nQuestions;i++){
		ask(questions[i].q, questions[i].answ, questions[i].resp);
	}
	cout<<endl<<endl<<"Tu total de puntos es: "<<points;
	return 0;
}
void ask( string question,string opt[], int ans){
	int i, resp;
	cout<<question<<endl;
	for(i=0;i<4;i++){
		cout<<i+1<<opt[i]<<endl;
	}
	cout<<"Ingresa el numero de tu respuesta: ";
	cin>>resp;
	if(ans==resp){
		points += 1;
	}
}