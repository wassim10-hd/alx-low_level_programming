#include "main.h"
/**
 * print_diagonal - line
 * @n: number of line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		-putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			putchar('\n');
		}
	}
}
