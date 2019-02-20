#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x,int y);
void clean(int x,int  y);
void hidecursor(void);
int main(){
	hidecursor();
	int x=10, y=15;
	bool quit = false;
	while(!quit){
		gotoxy(x,y);cout<<"*";
		if(kbhit()){
			gotoxy(10,10);cout<<"("<<x<<","<<y<<""")";
			clean(x, y);
			char key = getch();
			if(key =='w'){
				y -= 1;
			}
			if(key =='s'){
				y += 1;
			}
			if(key =='a'){
				x -= 1;
			}
			if(key =='d'){
				x += 1;
			}
			if(key=='q'){
				quit = true;
			}
		}
	}
	return 0;
}

void gotoxy(int x,int y){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
	return;
}
void clean(int x, int y){
	gotoxy(x,y);cout<<" ";
	return;
}
void hidecursor(void){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 0;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon, &cci);
	return;
}