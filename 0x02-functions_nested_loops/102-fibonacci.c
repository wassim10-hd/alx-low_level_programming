#include <stdio.h>
/**
 * main - fibonacci numbers
 * Return: 0 succ
 */
int main(void)
{
	int n = 0, s = 1, fib;

	printf("%d, %d", n, s);
	while (fib < 50)
	{
		fib = n + s;
		n = s;
		s = fib;
		if (fib < 50)
			printf(", %d", fib);
	}
	printf("\n");
	return (0);
}
