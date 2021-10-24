#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int choose,weeklysalary,num;
	float hours,rate,hwsalary,sales,comsalary,remuneration,piesalary;
	printf("(1 )managers\n");
	printf("(2) hourly workers\n");
	printf("(3) com-mission workers\n");
	printf("(4) pieceworkers\n");
	printf("choose the employee type on list: ");
	scanf_s("%d", &choose);
	printf("\n");
	switch (choose)
	{
	case(1):
		printf("Enter the salary of a week:");
		scanf_s("%d", &weeklysalary);
		printf("Salary is $%d\n", weeklysalary);
		break;
	case(2):
		printf("Enter # of hours worked :");
		scanf_s("%f", &hours);
		printf("Enter # hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);

		if (hours > 40)
			hwsalary = hours * rate + (hours - 40) * rate * (0.5);
		else
			hwsalary = hours * rate;

		printf("Salary is $%.2f\n", hwsalary);
		printf("\n");
		break;
	case(3):
		printf("Enter the sales amount of one week :");
		scanf_s("%f", &sales);

		comsalary = 250 + sales * 5.7 / 100;

		printf("Salary is $%.2f\n", comsalary);
		printf("\n");
		break;
	case(4):
		printf("Enter the number of pieces produced :");
		scanf_s("%d", &num);
		printf("Enter the remuneration of each piecethe :");
		scanf_s("%f", &remuneration);

		piesalary = num * remuneration;

		printf("Salary is $%.2f\n", piesalary);
		printf("\n");
		break;
	}
	system("pause");
	return 0;
}