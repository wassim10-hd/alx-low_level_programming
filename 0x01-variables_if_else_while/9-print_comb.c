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
	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(c);
			putchar(b);
		}
	}
	putchar('\n');
	return (0);
}
