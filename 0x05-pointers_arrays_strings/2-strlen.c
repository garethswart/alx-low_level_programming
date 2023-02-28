include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string with length to be returned.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i;

	while (*s[i] != "")
		i++;
	return (i);
}
