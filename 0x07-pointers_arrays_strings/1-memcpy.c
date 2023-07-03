#include "main.h"
#include <string.h>
/**
 * _memcpy - function
 * @dest: destination
 * @src: source
 * @n: int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
