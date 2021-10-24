#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=9, b, d, e, f=5;

	f = (a + 1) / 2;
	for (b = 1; b <= f; b++)
	{
		for (d = f - b; d > 0; d--)
		{
			printf(" ");
		}
		for (e = 1; e <= 2 * b - 1; e++)
		{
			printf("*");
		}
		printf("\n");//´«¦æ
	}
	for (b = f - 1; b > 0; b--)
	{
		for (d = f - b; d > 0; d--)
		{
			printf(" ");
		}
		for (e = 1; e <= 2 * b - 1; e++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}