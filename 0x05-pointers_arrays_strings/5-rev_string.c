#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	char rev[] = *s;
	int strlen = 0;

	while (*(s + strlen) != '\0')
		strlen++;
	i = strlen;
	while (i >= 0)
	{
		rev[j] = *(s + i);
		j++;
		i--;
	}
	*s = rev;
}
