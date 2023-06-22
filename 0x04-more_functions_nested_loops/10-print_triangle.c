#include "main.h"
/**
 * print_triangle - code
 * @size: var
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
				_putchar(' ');
			j = size;
			for (k = 1; k <= i; k++)
				_putchar('#');
			k = 1;
			_putchar('\n');
		}
	}
}
