#include <iostream>
#include <graphics.h>
using namespace std;

int main(){
	
	int height = GetSystemMetrics(SM_CYSCREEN);
	int width = GetSystemMetrics(SM_CXSCREEN);
	
	initwindow(width, height,"",-3,-3);
	setbkcolor(3);
	
	int x = 100;
	int y = 100;
	int z = 50;
	while(1){
		setcolor(GREEN);
		circle(x,y,z);
		if(GetAsyncKeyState(VK_LEFT)){
			z-=5;
			cleardevice();
		}
		if(GetAsyncKeyState(VK_RIGHT)){
			z+=5;
			cleardevice();
		}
		if(GetAsyncKeyState((0x53)))
			y++;
		if(GetAsyncKeyState((0x57)))
			y--;
		if(GetAsyncKeyState((0x51)))
			x--;
		if(GetAsyncKeyState((0x45)))
			x+=5;
		if(GetAsyncKeyState((0x44)))
			x++;
		if(GetAsyncKeyState((0x41)))
			x-=5;
		if(GetAsyncKeyState(VK_UP))
			y-=5;
		if(GetAsyncKeyState(VK_DOWN))
			y+=5;
		if (GetAsyncKeyState(VK_SPACE))
			x+=10;
		if(GetAsyncKeyState(VK_RETURN))
			break;
		if(GetAsyncKeyState(VK_BACK))
			cleardevice();
		if(GetAsyncKeyState((0x50))){
			x-=5;
			cleardevice();
		}
		delay(10);          //////////////////////////BMP
	}
	
	closegraph();
}

