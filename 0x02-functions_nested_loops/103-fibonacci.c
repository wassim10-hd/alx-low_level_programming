#include <stdio.h>
/**
 * main - fibonacci numbers
 * Return: 0 succ
 */
int main(void)
{
	long int n = 0, s = 1, fib, i = 0;

	while (1)
	{
		fib = n + s;
		n = s;
		s = fib;
		if (fib > 4000000)
			break;
		else if ((fib % 2) == 0)
			i = fib + i;
	}
	printf("%ld", i);
	printf("\n");
	return (0);
}
