#include<Dxlib.h>
#include<math.h>

#define PI 3.14159265
class Circle{
	public:
		int i;
		int x, y;
		int dx, dy;
		void func();
		Circle() {
			i = 0;
			x = 200;
			y = 200;

		}
		~Circle() {/*Destructor*/}
};
void Circle::func() {
	i++;
	x += dx;
	y += dy;
	DrawExtendFormatString(x,y,3,3,GetColor(i+100,i,300-i),"YJSNPI");
	if (i > 360) {
		i = 0;
	}

	if (x < 50) {
		dx = dx * -1;
	}
	else if (y < 50) {
		dy = dy * -1;
	}
	else if (x > 550) {
		dx = dx * -1;
	}
	else if (y > 430) {
		dy = dy * -1;
	}

}
int WINAPI WinMain(HINSTANCE hinstance,HINSTANCE hPrevInstance,LPSTR IpCmdLine,int nCmdShow) {
	if(DxLib_Init()==-1) {return -1;}
	SetDrawScreen(DX_SCREEN_BACK);
	Circle c[10];
	for (int j = 0; j < 10; j++) {
		c[j].dx = rand()%40;
		c[j].dy = rand()%20;
	}
	while (CheckHitKey(KEY_INPUT_ESCAPE)==FALSE) {
		//DrawFormatString(100, 100, GetColor(255, 100, 255), "WORKING....");

		for (int j = 0; j < 10;j++) {
			c[j].func();

		}
		

			ScreenFlip();
			ClearDrawScreen();
	}
	DxLib_End();
	return 0;
}
