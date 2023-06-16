#include<stdio.h>
#include<ctype.h>
/**
 * main - avoid eand q
 * Return: 0 success
 */
int main(void)
{
	char letter = 'a', letter1 = 'f', letter2 = 'r';
		while (letter < 'e')
		{
			putchar(letter);
			letter++;
		}
		while (letter1 > 'e' && letter1 < 'q')
		{
			putchar(letter1);
			letter1++;
		}
		while (letter2 > 'q')
		{
			putchar(letter2);
			letter2++;
		}
	putchar('\n');
	return (0);
}
