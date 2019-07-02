#include "graphics.h"
#include<iostream>
using namespace std;
void yataydaÝlerleme(int x, int y, int adým, int yön, int a[][6]){
	if (yön == 1){
		if (a[x][y] == 5){
			for (int i = 0; i < adým; i++){
				if (a[x][y - 2] == 5){
					a[x][y - 2 + 3] = a[x][y - 2];
					a[x][y - 2] = 0;




				}
				else if (a[x][y - 1] == 5){
					a[x][y - 1 + 3] = a[x][y - 1];
					a[x][y - 1] = 0;
				}
				else if (a[x][y - 1] == 0){
					a[x][y + 3] = a[x][y];
					a[x][y] = 0;
				}
				y++;





			}
		}
		else if (a[x][y] == 15 || a[x][y] == 50){
			for (int i = 0; i < adým; i++){
				if (a[x][y - 1] == 15 || a[x][y - 1] == 50){
					a[x][y - 1 + 2] = a[x][y - 1];
					a[x][y - 1] = 0;
				}
				else if (a[x][y - 1] == 0){
					a[x][y + 2] = a[x][y];
					a[x][y] = 0;
				}
				y++;
			}
		}
	}
	if (yön == 0){
		if (a[x][y] == 5){
			for (int i = 0; i < adým; i++){
				if (a[x][y + 2] == 5){
					a[x][y + 2 - 3] = a[x][y + 2];
					a[x][y + 2] = 0;
				}
				else if (a[x][y + 1] == 5){
					a[x][y + 1 - 3] = a[x][y + 1];
					a[x][y + 1] = 0;
				}
				else if (a[x][y + 1] == 0){
					a[x][y - 3] = a[x][y];
					a[x][y] = 0;
				}




				y--;
			}
		}
		else if (a[x][y] == 15 || a[x][y] == 50){
			for (int i = 0; i < adým; i++){
				if (a[x][y + 1] == 15 || a[x][y + 1] == 50){
					a[x][y + 1 - 2] = a[x][y + 1];
					a[x][y + 1] = 0;
				}
				else if (a[x][y + 1] == 0){
					a[x][y - 2] = a[x][y];
					a[x][y] = 0;
				}




				y--;
			}
		}
	}

}


