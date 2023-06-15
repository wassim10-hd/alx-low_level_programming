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
printf("Sise of char :%d byte(s)\n", sizeof(c));
printf("Sise of int :%d byte(s)\n", sizeof(a));
printf("Sise of long int :%d byte(s)\n", sizeof(b));
printf("Sise of long long int :%d byte(s)\n", sizeof(l));
printf("Size of float:%d byte(s) \n", sizeof(f));
return (0);
}
