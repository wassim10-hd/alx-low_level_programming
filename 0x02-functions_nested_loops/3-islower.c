#include "main.h"
#include <ctype.h>
/**
 * _islower - check the small letter
 * Return: 1(succ) 0 (failed)
 * @c: is the carater on test
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (0);
		_putchar('\n');
	}
}
