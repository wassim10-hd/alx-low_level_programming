#include<stdio.h>
/**
 * main - print combination of two digit
 * Return:0 succ
 */
int main(void)
{
	int i, j, a;

	a = 49;
	for (i = 48; i < 58; i++)
	{
		for (j = a; j < 58; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (a != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
