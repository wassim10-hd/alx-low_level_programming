#include "main.h"
#include <string.h>
/**
 * print_rev - reverse strings
 * @s: string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
