// ConsoleApplication135.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int ogrnotu[10];
	int toplam = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("%d. Öğrencinin Notu :",i+1); scanf_s("%d", &ogrnotu[i]);
		toplam += ogrnotu[i];
	}
	float sonuc = toplam / 10;
	printf("Sınıf Ortalaması = %.2f", sonuc);


	system("pause");
    return 0;
}

