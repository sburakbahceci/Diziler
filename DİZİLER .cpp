// ConsoleApplication133.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//
#include "stdafx.h"
#include <stdlib.h>
#include <math.h>

int main()
{
	/*int dizi[5]; 
	printf("5 adet sayı giriniz:");
	for (int i = 0; i <= 4; i++) {
		printf("%d sayi : ", i + 1); scanf_s("%d", &dizi[i]);
	}
	
	for (int i = 0; i <= 4; i++)
	{
		printf(" Dizinin %d. elemanı =%d\n", i, dizi[i]);
	}



	system("pause");
    return 0;
	*/


	int dizi[5];
	printf("5 adet sayi gir : \n");
	for (int i = 0; i <= 4; i++) {
		printf("%d sayi :", i + 1); scanf_s("%d", &dizi[i]);
	}
	printf("SAYILARIN KAREKOKU\n");
	for (int i = 0; i <= 4; i++)
	{
		
		printf("%.2f\n", sqrt(dizi[i]));
	}

	system("pause");










}

