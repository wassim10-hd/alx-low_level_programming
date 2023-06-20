#include "main.h"
/**
 * times_table - time table
 */
void times_table(void)
{
	int i, j, sum = 0;

	for (i = 0; i < 10 ; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			sum = i * j;
			if (sum <= 9)
				_putchar(' ');
			else
				_putchar((sum / 10) + 48);
			_putchar((sum % 10) + 48);
		}
		_putchar('\n');
	}
}
