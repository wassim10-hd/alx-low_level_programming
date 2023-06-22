#include "main.h"
#include <ctype.h>
/**
 * _isupper - uppercase
 * @c: var
 * Return:0 lowase , 1 uppercase
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
