#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: void.
 */
int _strcmp(char *s1, char *s2)
{
	int s1len = 0;
	int c1;
	int s2len = 0;
	int c2;
	int comp = 0;

	while (s1[s1len] != '\0' && s2[s2len] != '\0' && comp == 0)
	{
		c1 = s1[s1len];
		c2 = s2[s2len];
		s1len++;
		s2len++;
		comp = c1 - c2;
	}
	if (comp == 0)
		comp = c1 - c2;
	return (comp);
}
