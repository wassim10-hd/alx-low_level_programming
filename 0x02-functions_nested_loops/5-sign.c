#include "main.h"
/**
 * print_sign - sign of number
 * Return: 1 (+) 0 (0) -1 (-)
 * @n: number
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
