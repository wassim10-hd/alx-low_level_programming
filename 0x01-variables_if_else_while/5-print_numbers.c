#include<stdio.h>
/**
 * main - print all single numbers
 * Return: 0 success
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
