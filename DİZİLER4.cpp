// ConsoleApplication136.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Turkish");
	int ogr_notu[10];
	int toplam = 0;
	int aanotu = 0; 
	int bbnotu = 0;
	int ccnotu = 0;
	int ffnotu = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("%d. Öğrencinin Notu:",i+1); scanf_s("%d", &ogr_notu[i]);
		if (ogr_notu[i] >= 90 && ogr_notu[i] <= 100)
		{
			aanotu++;
		}
		else if (ogr_notu[i] >= 70 && ogr_notu[i] <= 89)
		{
			bbnotu++;
		}
		else if (ogr_notu[i] >= 60 && ogr_notu[i] <= 69)
		{
			ccnotu++;
		}
		else
		{
			ffnotu++;
		}
	
	}
	printf("AA notu: %d", aanotu);
	printf("BB notu: %d", bbnotu);
	printf("CC notu: %d", ccnotu);
	printf("FF notu: %d", ffnotu);
	system("pause");
    return 0;
}

