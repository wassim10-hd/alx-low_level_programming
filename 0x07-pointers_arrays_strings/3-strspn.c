#include "main.h"
#include <string.h>
/**
 * _strspn - fun
 * @s: str1
 * @accept: str2
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int l;

	l = strspn(s, accept);
	return (l);
}
