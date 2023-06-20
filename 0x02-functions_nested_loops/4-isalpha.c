#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check letters
 * Return: 1 succ 0 failed
 * @c: caracter
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
