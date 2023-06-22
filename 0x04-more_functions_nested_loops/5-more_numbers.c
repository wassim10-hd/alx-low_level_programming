#include "main.h"
/**
 * more_numbers - print 10 time 0 to 14
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	while (j <= 9)
	{
		while (i < 15)
		{
			if (i > 9)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			i++;
		}
		j++;
		i = 0;
		_putchar('\n');
	}
}
