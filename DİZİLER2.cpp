// ConsoleApplication134.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int dizi[5];
	int toplam = 0;
	printf("3 adet sayi giriniz : \n");
	for (int i = 0; i <= 2; i++)
	{
		printf("%d sayi", i + 1); scanf_s("%d", &dizi[i]);
		toplam = toplam + dizi[i];
	}
	

		
		printf("toplam %d ", toplam);






	system("pause");
    return 0;
}

