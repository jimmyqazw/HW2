#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k, l;

	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}

	printf("(B)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (l = 0; l < i; l++)
		{
			printf(" ");
		}		
		for (j = 0; j < 10 - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			printf(" ");
		}
					
		for (l = 0; l < i + 1; l++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}