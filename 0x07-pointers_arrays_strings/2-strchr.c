#include "main.h"
#include <string.h>
/**
 * _strchr - function
 * @s: string
 * @c: char
 * Return: s
 */
char *_strchr(char *s, char c)
{
	char *r;


	r = strchr(s, c);
	return (r);
}
