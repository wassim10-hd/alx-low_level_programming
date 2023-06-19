#include<stdio.h>
/**
 * main - print combination of three digit numbers
 * Return:0 succ
 */
int main(void)
{
	int a, b, c, j, i;

	for (a = 48; a < 58; a++)
	{
		c = a + 1;
		j = a + 2;
		for (b = c; b < 58; b++)
		{
			for (i = j; i < 58; i++)
			{
				if (a != b && b != i && a != i)
				{
					putchar(a);
					putchar(b);
					putchar(i);
					if ((a != 55) || (b != 56 && c != 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}

