#include"graphics.h"
#include<iostream>
#include"yataydailerle.h"
#include"duseydeilerle.h"
using namespace std;
int kontrolEt(int x, int y, int ad�m, int y�n, int a[][6]){

	int sonuc = 1;

	if (y�n == 1){
		if (a[x][y] == 5){
			int k = 0;
			for (int i = 1; i <= ad�m; i++){

				if (!(a[x][y + i] == 5) && a[x][y + i] > 0){
					sonuc = 0; break;
				}
				if (a[x][y + i] == 0){
					k++;
				}
			}
			yatayda�lerleme(x, y, k, 1, a);

			return sonuc;
		}

		if ((a[x][y] == 15) || (a[x][y] == 50)){
			int k = 0;
			for (int i = 1; i <= ad�m; i++){
				if (!((a[x][y + i] == 15) || (a[x][y + i] == 50)) && a[x][y + i] > 0){
					sonuc = 0; break;
				}if (a[x][y + i] == 0){
					k++;
				}
			}
			yatayda�lerleme(x, y, k, 1, a);
			return sonuc;
		}
		if (a[x][y] == 10){
			int k = 0;
			for (int i = 1; i <= ad�m; i++){




				if (!(a[x + i][y] == 10) && a[x + i][y] > 0){
					sonuc = 0; break;
				}if (a[x + i][y] == 0){
					k++;
				}
			}
			d�seyde�lerleme(x, y, k, 1, a);
			return sonuc;
		}




		if (a[x][y] == 20){
			int k = 0;
			for (int i = 1; i <= ad�m; i++){
				if (!(a[x + i][y] == 20) && a[x + i][y] > 0){
					sonuc = 0; break;
				}if (a[x + i][y] == 0){
					k++;
				}
			}
			d�seyde�lerleme(x, y, k, 1, a);
			return sonuc;
		}
	}

	if (y�n == 0){
		if (a[x][y] == 5){
			int k = 0;
			for (int i = 1; i <= ad�m; i++){
				if (!(a[x][y - i] == 5) && a[x][y - i] > 0){
					sonuc = 0; break;
				} if (a[x][y - i] == 0){
					k++;
				}
			}
			yatayda�lerleme(x, y, k, 0, a);
			return sonuc;
		}




		if ((a[x][y] == 15) || (a[x][y] == 50)){
			int k = 0;
			for (int i = 1; i <= ad�m; i++){
				if (!((a[x][y - i] == 15) || (a[x][y - i] == 50)) && a[x][y - i] > 0){
					sonuc = 0; break;
				}if (a[x][y - i] == 0){
					k++;
				}
			}
			yatayda�lerleme(x, y, k, 0, a);
			return sonuc;
		}
		if (a[x][y] == 10){
			int k = 0;
			for (int i = 1; i <= ad�m; i++){




				if (!(a[x - i][y] == 10) && a[x - i][y] > 0){
					sonuc = 0; break;
				} if (a[x - i][y] == 0){
					k++;
				}
			}
			d�seyde�lerleme(x, y, k, 0, a);
			return sonuc;
		}




		if (a[x][y] == 20){
			int k = 0;
			for (int i = 1; i <= ad�m; i++){
				if (!(a[x - i][y] == 20) && a[x - i][y] > 0){
					sonuc = 0; break;
				}if (a[x - i][y] == 0){
					k++;
				}
			}
			d�seyde�lerleme(x, y, k, 0, a);
			return sonuc;
		}
	}
}
