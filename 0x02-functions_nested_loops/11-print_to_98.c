#include "main.h"
/**
 * print_to_98 - always
 * @n: var
 */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d", i);
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
			printf("%d", j);
	}
	printf('\n');
}
