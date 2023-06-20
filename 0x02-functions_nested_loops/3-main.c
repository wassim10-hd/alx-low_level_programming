#include "main.h"
#include <ctype.h>
/**
 * islower - check the small letter
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
