#include<stdio.h>
#include<stdlib.h>

int main()
{
	int length, length2 , breadth;
	while (1)
	{
		printf("Enter the length: ");
		scanf_s("%d", &length);
		printf("Enter the breadth: ");
		scanf_s("%d", &breadth);
		
		length2 = length;
		for (length; length > 0; length--)
		{
			printf("*");
		}
		printf("\n");
		for (breadth; breadth > 2; breadth--)
		{
			printf("*");
			length = length2;
			for (length; length > 2; length--)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
		
		length = length2;
		for (length; length > 0; length--)
		{
			printf("*");
		}
		printf("\n");
		printf("\n");
	}

	system("pause");
	return 0;
}