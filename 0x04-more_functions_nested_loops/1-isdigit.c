#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check numbers
 * @c: var
 * Return:0 non_digit, 1 digit
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
