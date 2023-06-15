#include<stdio.h>
/**
 * main - this program print the size of various variables
 * Return:0 (succ)
 */
int main(void)
{
int a;
long int b;
char c;
long long int l;
float f;
printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(a));
printf("Size of a long int: %d byte(s)\n", sizeof(b));
printf("Size of a long long int: %d byte(s)\n", sizeof(l));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
