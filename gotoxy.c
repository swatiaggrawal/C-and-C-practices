#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x,int y){
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main(){
    char c[40]="Program to change cursor position!!";
    gotoxy(50,10);
    printf("%s",c);
    return 0;
}
