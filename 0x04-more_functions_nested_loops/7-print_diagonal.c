#include "main.h"
/**
 * print_diagonal - line
 * @n: number of line
 */
void print_diagonal(int n)
{
	int i = 0, j = 0, k;
	
	k = n;
	while (i < n)
	{
		if (n > 0)
		{
			while (j < (n - k))
			{
				_putchar(' ');
				j++;
			}
			k--;
			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
		else
			_putchar('\n');
		i++;
	}
}
