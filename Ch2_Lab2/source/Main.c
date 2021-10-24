#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j, temp, temp2;
	//---------------------------------------
	printf("  |");
	for (i = 1; i < 10; i++)
		printf("%3d", i);
	printf("\n");
	puts("------------------------------");
	for (i = 1; i < 10; i++)
	{
		printf("%d |", i);
		for (j = 1; j < 10; j++)
		{
			printf("%3d", i*j);

		}
		printf("\n");
	}

	system("pause");
	return 0;

}