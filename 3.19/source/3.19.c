#include<stdio.h>
#include<stdlib.h>

int main()
{
	float principal,rate,days,charge;
	
	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &principal);
		if (principal == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &days);
		charge = principal * rate*days / 365;
		printf("The interest charge is $%0.2f: ",charge);
		printf("\n");
		printf("\n");
	}

	system("pause");
	return 0;
}