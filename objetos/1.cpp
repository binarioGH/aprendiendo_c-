#include<iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
//https://www.youtube.com/watch?v=uh7vRiuDCgI 	
void gotoxy(int x, int y){
	HANDLE hCon;
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon,dwPos);
}
class PUNTOS{
	int x, y;
public:
	PUNTOS(int _x, int _y);
	void pintar() const;
	void mover();
};
PUNTOS::PUNTOS(int _x, int _y){
	x = _x;
	y = _y;
}
void PUNTOS::pintar() const{
	gotoxy(x,y); cout<<'*';
}
void PUNTOS::mover(){
	char tecla = getch();
	if(tecla == 'j'){
	 x--;
	}
	else if(tecla == 'l'){
		x++;
	}
	else if(tecla == 'k'){
		y++;
	}
	else if(tecla == 'i'){
		y--;
	}

}
int main(){
	PUNTOS A(10, 10);
	while(1){
		A.pintar();
		A.mover();
	}
	return 0;
}