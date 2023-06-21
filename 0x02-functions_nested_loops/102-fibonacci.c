#include <stdio.h>
/**
 * main - fibonacci numbers
 * Return: 0 succ
 */
int main(void)
{
	long int n = 0, s = 1, fib, i =0;

	printf("%ld, %ld", n, s);
	while (i < 50)
	{
		fib = n + s;
		n = s;
		s = fib;
		printf(", %ld", fib);
		i++;
	}
	printf("\n");
	return (0);
}
