include "main.h"
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
	char rev[_strlen(*s)];

	i = _strlen(*s);
	while (i >= 0)
	{
		rev[j] = *s[i];
		j++;
		i--;
	}
}
