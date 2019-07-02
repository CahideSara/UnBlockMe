#include<iostream>
#include"graphics.h"
#include"yataydailerle.h"
#include"duseydeilerle.h"
#include"cizdir.h"
#include"kontrolet.h"
#include"Windows.h"

using namespace std;
int boyut = 100;
int birincitik_dizisi[2] = {}, ikincitik_dizisi[2] = {};
int a[][6] = {
	{ 5, 5, 5, 0, 0, 10 },
	{ 0, 0, 10, 0, 0, 10 },
	{ 50, 50, 10, 0, 0, 10 },
	{ 20, 0, 10, 0, 15, 15 },
	{ 20, 0, 0, 0, 20, 0 },
	{ 5, 5, 5, 0, 20, 0 } };

void secilenBolgeyiBul(int x, int y, int a[]) //(t�klan�lan b�lgeye ait sat�r s�tunlar� bul)
{
	a[0] = (y - y%boyut) / boyut; // sat�r de�eri bulunup gelen dizinin ilk eleman�na aktar�l�yor.
	a[1] = (x - x%boyut) / boyut; // s�tun de�eri bulunup gelen dizinin ikinci eleman�na aktar�l�yor.
	cout << "Tiklanilan alan" << endl;
	cout << "satir " << " " << "sutun" << endl;
	cout << a[0] << "  \t" << a[1] << endl;
}
bool islemGerceklestirilebilirmi()
{
	int i = ikincitik_dizisi[0];//sat�r       //0-> kahverengi ---bo� alan
	int j = ikincitik_dizisi[1];//s�tun                     //5-> mavi ---------yatay gidebilir
	//10->k�rm�z�-------dikey gider
	int r = birincitik_dizisi[0];//sat�r       //15->sar�----------yatay gider
	int p = birincitik_dizisi[1];//s�tun                    //20->ye�il---------dikey gider
	//50->beyaz---------yatay gider
	if (a[r][p] != 0 && a[i][j] == 0)//son t�klan�lan alan�n de�eri s�f�r m� ?
	{
		if (a[r][p] == 5 && r == i) //mavi
			return true;
		if (a[r][p] == 10 && j == p)//k�rm�z�
			return true;
		if (a[r][p] == 15 && r == i)//sar�
			return true;
		if (a[r][p] == 20 && j == p)//ye�il
			return true;
		if (a[r][p] == 50 && r == i)//beyaz
			return true;
		for (int i = 0; i < 6; i++){
			for (int j = 0; j < 6; j++){
				cout << a[i][j] << " ";
			}cout << endl;
		}
	}	cout << "islem yapilamaz" << endl;
	return false;
}
void matrisiGuncelle(int x, int y, int a[][6])
{
	//PlaySound(TEXT("sesler/ses.wav"), NULL, SND_SYNC);
	int h = ikincitik_dizisi[0] - birincitik_dizisi[0];
	int p = ikincitik_dizisi[1] - birincitik_dizisi[1];
	if (h == 0 && p > 0){
		kontrolEt(x, y, p, 1, a);

	}
	if (h == 0 && p < 0){
		kontrolEt(x, y, -p, 0, a);
	}

	if (h > 0 && p == 0){
		kontrolEt(x, y, h, 1, a);
	}if (h < 0 && p == 0){
		kontrolEt(x, y, -h, 0, a);
	}

}
void main(){
	initwindow(640, 615, "Unblock Me Oyunu");
	//readimagefile("ekran.jpg", 0, 0, 640, 615);
	//delay(3500);
	setfillstyle(1, 4);
	bar(600, 0, 640, 200);
	setfillstyle(1, 4);
	bar(600, 300, 640, 640);
	int x2, y2;
	bool oyunbittimi = false, secim = false;
	int t�ksay�s� = 0;
	do
	{
		cizdir(a);
		outtextxy(607, 205, "�"); outtextxy(607, 225, "I");
		outtextxy(607, 245, "K"); outtextxy(607, 265, "I");
		outtextxy(607, 283, "�");
		if (a[2][4] == 50 && a[2][5] == 50){
			setfillstyle(1, 12);
			bar(100, 200, 450, 400);
			outtextxy(150, 300, "OYUN B�TT� TEBR�KLER KAZANDINIZ");
			break;
		}
		else{
			if (ismouseclick(WM_LBUTTONDOWN))
			{
				int x1 = mousex();
				int y1 = mousey();
				delay(300);
				t�ksay�s� = (t�ksay�s� + 1) % 2;
				if (t�ksay�s� == 1 && x1 < 600 && y1 < 600)
				{
					//se�im i�lemi ger�ekle�ti t�klan�lan b�lgenin sat�r ve s�tununu bul.
					secim = true;
					secilenBolgeyiBul(x1, y1, birincitik_dizisi);
				}
				else if (t�ksay�s� == 0 && x1 < 600 && y1 < 600)
				{
					secim = false;
					secilenBolgeyiBul(x1, y1, ikincitik_dizisi);
					if (islemGerceklestirilebilirmi())
					{
						for (int i = 0; i < 6; i++){
							for (int j = 0; j < 6; j++){
								cout << a[i][j] << " ";
							}cout << endl;
						}
						cout << "islem yapilabilir..." << endl;
						//i�lem yap�labilir o halde matrisi g�ncelleyelim.
						matrisiGuncelle(birincitik_dizisi[0], birincitik_dizisi[1], a);

					}
				}
				else
				{
					secim = false;
					cout << "yanlis alana tikladiniz." << endl;
				}
				clearmouseclick(WM_LBUTTONDOWN);
			}
		}
	} while (!oyunbittimi);
	system("pause");
}                                                   