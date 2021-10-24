#include<stdio.h>
#include<stdlib.h>

int main()
{
	float hour,rate,salary;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%f",&hour);
		if (hour == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		if (hour > 40)
		{
			salary = (hour - 40)*rate*0.5 + hour * rate;
		}
		else
		{
			salary = hour * rate;
		}
		printf("Salary is $%0.2f", salary);
		printf("\n");
		printf("\n");
	}

	system("pause");
	return 0;
}