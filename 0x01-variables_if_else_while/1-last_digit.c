#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - print the last digit
 * Return: 0 success
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;
	if (x == 0)
		printf("Last digit of %d is %d and is 0", n, x);
	else if (x < 6 && x != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, x);
	else if (x > 5)
		printf("Last digit of %d is %d and is greater than 5", n, x);
	return (0);
}
