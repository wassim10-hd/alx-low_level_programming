#include "main.h"
/**
 * main - print message
 * Return: 0 succ
 */
int main(void)
{
	int ch;
	char str[] = "_putchar";

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
