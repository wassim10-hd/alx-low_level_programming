#include<stdio.h>
/**
 * main - print single numbers using putchar only
 * Return: 0 success
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
