#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int fabrika[2][4];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf("%d. fabrikanın %d. elemanının maaşı:", i + 1, j + 1); scanf_s("%d", &fabrika[i][j]);

		}
	}
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++) {
			printf("%d. fabrikanın %d. elemanının maaşı: %d TL\n", i + 1, j + 1,fabrika[i][j]); 

		}
	}

	system("pause");
    return 0;
}

