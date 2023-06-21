#include "main.h"
/**
 * print_times_table - code
 * @n: var
 */
void print_times_table(int n)
{
	int i, j, sum = 0;

	for (i = 0; i <= n ; i++)
	{
		if (n >= 0 && n <= 15)
		{
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			sum = i * j;
			if (sum <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (sum <= 99)
			{
				_putchar(' ');
				_putchar((sum / 10) + 48);
			}
			else
			{
				_putchar((sum / 100) + 48);
				_putchar(((sum % 100) / 10) + 48);
			}
			_putchar((sum % 10) + 48);
		}
		_putchar('\n');
		}
	}
}
