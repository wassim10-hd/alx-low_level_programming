#include <stdio.h>
/**
 * main - code
 * Return: 0 succ
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i <= 9)
		{
			if (((i % 3) == 0) && ((i % 5) == 0))
				printf("FizzBuzz ");
			else if ((i % 3) == 0)
				printf("Fizz ");
			else if ((i % 5) == 0)
				printf("Buzz ");
			else
				printf("%d ", i);
		}
		else if (i >= 10 && i <= 99)
		{
			if (((i % 3) == 0) && ((i % 5) == 0))
				printf("FizzBuzz ");
			else if ((i % 3) == 0)
				printf("Fizz ");
			else if ((i % 5) == 0)
				printf("Buzz ");
			else
			{
				printf("%d", (i / 10));
				printf("%d ", (i % 10));
			}
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
	}
	printf("\n");
	return (0);
}
