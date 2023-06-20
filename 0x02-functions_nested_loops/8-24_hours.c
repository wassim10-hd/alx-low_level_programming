#include "main.h"
/**
 * jack_bauer - print time
 */
void jack_bauer(void)
{
	int i, j, a, b;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 52; j++)
		{
			for (a = 48; a < 54; a++)
			{
				for (b = 48; b < 58; b++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(a);
					_putchar(b);
					_putchar('\n');
				}
				b = 48;
			}
			a = 48;
		}
		j = 48;
	}
}
