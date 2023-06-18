#include<stdio.h>
/**
 * main - print combination
 * Return: 0 succ
 */
int main(void)
{
	int a, b, c;

	b = 32;
	c = 44;
	for (a = 48; a < 57; a++)
	{
		putchar(a);
		putchar(c);
		putchar(b);
	}
	putchar(57);
	return (0);
}
