#include "main.h"
#include <string.h>
/**
 * _memset - function
 * @s: var
 * @b: char
 * @n: int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
