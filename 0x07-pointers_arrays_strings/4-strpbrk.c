#include "main.h"
#include <string.h>
/**
 * _strpbrk - fun
 * @s: str1
 * @accept: str2
 * Return:s
 */
char *_strpbrk(char *s, char *accept)
{
	char *r;

	r = strpbrk(s, accept);
	return (r);
}
