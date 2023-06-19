#include<stdio.h>
/**
 * main - print combination of two two digit numbers
 * Return: 0 succ
 */
int main(void)
{
	int a = 0, b;

	while (a <= 99)
	{
		b = a;
		while (b <= 99)
		{
			if (b != a)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(32);
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				if (a != 98 || b != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
