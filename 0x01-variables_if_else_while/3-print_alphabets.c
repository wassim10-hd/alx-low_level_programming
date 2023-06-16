#include<stdio.h>
#include<ctype.h>
/**
 * main - print alphabet
 * Return: 0 success
 */
int main(void)
{
char letter = 'a';

char uppercase = toupper(letter);

while (letter <= 'z')
{
	putchar(letter);
	letter++;
}
while (uppercase <= 'Z')
{
	putchar(uppercase);
	uppercase++;
}
putchar('\n');
return (0);
}
