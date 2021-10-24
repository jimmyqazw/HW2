#include<stdio.h>
#include<stdlib.h>

int main()
{
	float account,balance,charge,credit,limit,newbalance;
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%f", &account);
		if (account == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter beginning balance: ");
		scanf_s("%f", &balance);
		printf("Enter total charges: ");
		scanf_s("%f", &charge);
		printf("Enter total credit: ");
		scanf_s("%f", &credit);
		printf("Enter credit limit: ");
		scanf_s("%f", &limit);

		newbalance = balance + charge - credit;
		if (newbalance > balance)
		{
			printf("\nAccount     : %0.2f\n", account);
			printf("Credit limit: %0.2f\n", limit);
			printf("Balance     : %0.2f\n", newbalance);
			printf("Credit limit exceeded\n");
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}