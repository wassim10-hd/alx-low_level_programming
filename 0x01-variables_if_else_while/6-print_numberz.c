#include<stdio.h>
/**
 * main - print single numbers using putchar only
 * Return: 0 success
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
