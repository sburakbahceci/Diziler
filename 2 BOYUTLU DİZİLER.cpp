// ConsoleApplication138.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>


int main()
{

	setlocale(LC_ALL, "Turkish");

/*
	int matris[2][2];
	matris[0][0] = 1;
	matris[0][1] = 2;
	matris[1][0] = 3;
	matris[1][1] = 4;
	for (int i = 0; i < 2; i++)
	{
		printf("%d", matris[i][i]);
	}
	*/

	/*int matris[2][3] = { {1,2,3},{6,4,5} };
	printf("%d", matris[0][0]);
	printf("%d", matris[0][1]);
	printf("%d\n", matris[0][2]);
	printf("%d", matris[1][0]);
	printf("%d", matris[1][1]);
	printf("%d", matris[1][2]);*/

	/*int matris[2][3] = { {3,4,5},{6,7,8} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	*/



	int matris[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("4 adet sayi giriniz:"); scanf_s("%d", &matris[i][j]);

		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", matris[i][j]);

		}
		printf("\n");
	}


	system("pause");
	return 0;
}