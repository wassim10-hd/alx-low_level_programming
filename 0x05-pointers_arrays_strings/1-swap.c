#include "main.h"
/**
 * swap_int - change position
 * @a: var
 * @b: var
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
