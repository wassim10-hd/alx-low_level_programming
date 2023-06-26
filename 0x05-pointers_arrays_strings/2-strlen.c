#include "main.h"
#include <string.h>
/**
 * _strlen - length
 * @s: char
 * Return: lenght
 */
int _strlen(char *s)
{
	int i;
	
	for (i = 0; *s != '\0'; s++)
		++i;
	return (i);
}
