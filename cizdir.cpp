#include"graphics.h"
#include<iostream>
using namespace std;
void cizdir(int a[][6])
{
	int baslangicx = 0, baslangicy = 0;
	int boyut = 100;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (a[i][j] == 5)
			{
				setfillstyle(4, 3);
			}
			else if (a[i][j] == 10)
			{
				setfillstyle(6, 5);
			}
			else if (a[i][j] == 15)
			{
				setfillstyle(7, 6);
			}
			else if (a[i][j] == 20)
			{
				setfillstyle(8, 7);
			}
			else if (a[i][j] == 50)
	{
				setfillstyle(1, 4);
	readimagefile("resim.jpg");
}                             
			else
				setfillstyle(1, 0);
			bar(baslangicx + j*boyut, baslangicy + i*boyut, baslangicx + j*boyut + boyut, baslangicx + i*boyut + boyut);
		}
	}
}