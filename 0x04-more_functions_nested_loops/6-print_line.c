#include "main.h"
/**
 * print_line - line
 * @n: number of line
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}
