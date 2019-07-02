#include "graphics.h"
#include<iostream>
using namespace std;
void düseydeÝlerleme(int x, int y, int adým, int yön, int a[][6]){
	if (yön == 1){
		if (a[x][y] == 10){
			for (int i = 0; i < adým; i++){
				if (a[x - 2][y] == 10){
					a[x - 2 + 3][y] = a[x - 2][y];
					a[x - 2][y] = 0;
				}
				else if (a[x - 1][y] == 10){
					a[x - 1 + 3][y] = a[x - 1][y];
					a[x - 1][y] = 0;
				}
				else if (a[x - 1][y] == 0){
					a[x + 3][y] = a[x][y];
					a[x][y] = 0;
				}
				x++;
			}
		}
		else if (a[x][y] == 20){
			for (int i = 0; i < adým; i++){
				if (a[x - 1][y] == 20){
					a[x - 1 + 2][y] = a[x - 1][y];
					a[x - 1][y] = 0;
				}
				else if (a[x - 1][y] == 0){
					a[x + 2][y] = a[x][y];
					a[x][y] = 0;
				}
				x++;
			}
		}
	}





	if (yön == 0){
		if (a[x][y] == 10){
			for (int i = 0; i < adým; i++){
				if (a[x + 2][y] == 10){
					a[x + 2 - 3][y] = a[x + 2][y];
					a[x + 2][y] = 0;
				}
				else if (a[x + 1][y] == 10){
					a[x + 1 - 3][y] = a[x + 1][y];
					a[x + 1][y] = 0;
				}
				else if (a[x + 1][y] == 0){
					a[x - 3][y] = a[x][y];
					a[x][y] = 0;
				}
				x--;
			}
		}
		else if (a[x][y] == 20){
			for (int i = 0; i < adým; i++){
				if (a[x + 1][y] == 20){
					a[x + 1 - 2][y] = a[x + 1][y];
					a[x + 1][y] = 0;
				}
				else if (a[x + 1][y] == 0){
					a[x - 2][y] = a[x][y];
					a[x][y] = 0;
				}
				x--;




			}
		}
	}
}
