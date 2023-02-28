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
	char tmp;
	int strlen = 0;

	while (*(s + strlen) != '\0')
		strlen++;
	i = strlen - 1;
	while (j < (strlen / 2))
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
