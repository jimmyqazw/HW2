#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float money = 5000;
	printf("Interest Rate: 10.0%%\n");
	printf("Year\tAmount or deposit\n");
	for (int years = 1; years <= 15; years++)
	{
		money *= 1.1;
		printf("%d\t%0.2f\n", years,money);
	}
	printf("\n");

    money = 5000;
	printf("Interest Rate: 10.5%%\n");
	printf("Year\tAmount or deposit\n");
	for (int years = 1; years <= 15; years++)
	{
		money *= 1.105;
		printf("%d\t%.2f\n", years, money);
	}
	printf("\n");

	money = 5000;
	printf("Interest Rate: 11%%\n");
	printf("Year\tAmount or deposit\n");
	for (int years = 1; years <= 15; years++)
	{
		money *= 1.11;
		printf("%d\t%.2f\n", years, money);
	}
	printf("\n");

	money = 5000;
	printf("Interest Rate: 11.5%%\n");
	printf("Year\tAmount or deposit\n");
	for (int years = 1; years <= 15; years++)
	{
		money *= 1.115;
		printf("%d\t%.2f\n", years, money);
	}
	printf("\n");

	money = 5000;
	printf("Interest Rate: 12%%\n");
	printf("Year\tAmount or deposit\n");
	for (int years = 1; years <= 15; years++)
	{
		money *= 1.12;
		printf("%d\t%.2f\n", years, money);
	}
	printf("\n");
	system("pause");
	return 0;
}