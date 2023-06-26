#include "main.h"
#include <string.h>
/**
 * rev_string - reverse
 * @s: string
 */
void rev_string(char *s)
{
	int i, j;
	char ch;

	for (j = 0; s[j] != '\0'; ++j)
		;
	for (i = 0; i < l / 2; i++)
	{
		ch = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = ch;
	}
}
