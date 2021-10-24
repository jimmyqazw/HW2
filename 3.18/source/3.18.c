#include<stdio.h>
#include<stdlib.h>

int main()
{	
	float money,salary;
	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f",&money);
		if (money == -1)
		{
			system("pause");
			return 0;
		}
		salary = money * 0.09 + 200;
		printf("Salary is %0.2f\n", salary);
	}
	system("pause");
	return 0;
}