#include <graphics.h>

int main ()
{
	initwindow(600,500,"TUTORIAL");
	
	setbkcolor(BLACK);
	cleardevice();
	
	readimagefile("nyoba.jpg",100,100,300,300);
	
	getch();
	closegraph();
}
