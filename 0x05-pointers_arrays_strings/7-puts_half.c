#include "main.h"
#include <string.h>
/**
 * puts_half - half of string
 * @str: string
 */
void puts_half(char *str)
{
	int n, i;

	n = strlen(str);
	if (n % 2 == 0)
	{
		for (i = n / 2; i < n ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (n - 1) / 2; i < n; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
