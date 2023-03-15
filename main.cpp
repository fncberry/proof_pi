#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<Windows.h>
#include<iostream>
#include<wingdi.h>
using namespace std;
double x,y;
double cir=0;
double sqr(double a){return a*a;}
double cnt=0;
int main()
{
    char c;
    srand((double)time(NULL));
    while(1)
    {
        if(_kbhit())
        {
            c = _getch();
            if(c=='a') return 0;
        }
        for(int i=1;i<=1000000;i++)
        {
            x = ((double)rand()*1000000000.0+rand()%1000000000)/((double)RAND_MAX*1000000000.0+999999999.0);
            y = ((double)rand()*1000000000.0+rand()%1000000000)/((double)RAND_MAX*1000000000.0+999999999.0);
            cnt++;
            if(sqr(x)+sqr(y)<=1) cir++;
        }
        Sleep(1);
        system("cls");
        HDC hdc;
        printf("a키 누르면 모션 스킵\n\n\n\n\n\n\n");
        printf("\n\n반복 횟수 : %0.0f\n파이 추정값 : %0.30f",cnt,(double)(cir/cnt)*4);
    }
}
