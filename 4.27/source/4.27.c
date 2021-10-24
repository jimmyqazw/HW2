#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int length1, length2, length3;

	printf("邊長\t邊長\t斜邊\n");

	for (length3 = 1; length3 <= 500; length3++)
		for (length1 = 1; length1 < length3; length1++)
			for (length2 = length1 + 1; length2 < length3; length2++)
			{
				if (length3 * length3 == length1 * length1 + length2 * length2)
					printf("%d\t%d\t%d\n", length1, length2, length3);
			}
	system("pause");
	return 0;
}