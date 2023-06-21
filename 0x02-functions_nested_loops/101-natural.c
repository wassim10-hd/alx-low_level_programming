#include <stdio.h>
/**
 * main -code
 * Return:0 succ
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
