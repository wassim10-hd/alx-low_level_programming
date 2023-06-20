#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - last digit
 * @n: number
 * Return: last digit
 */
int print_last_digit(int n)
{
	char str[20];

	sprintf(str, "%d", n);
	_putchar(str[-1]);
	return (0);
}
