#include "main.h"
#include <stdlib.h>
/**
 * _strlen - determines the length of a string.
 * @str: string to be measured.
 *
 * Return: string length as int.
 */
int _strlen(char *str)
{
	int i = 0;

	if (str == 0)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat -  concatenates two strings.
 * @s1: first string to be concatinated.
 * @s2: Second string to be concatinated.
 *
 * Return: pointer to array.
 */
char *str_concat(char *s1, char *s2)
{
	int j = _strlen(s1);
	int k = _strlen(s2);
	char *p = (char *)malloc(j + k);
	int i = 0;

	if (!(char *)malloc(j))
		return (NULL);
	while (i < j)
	{
		p[i] = s1[i];
		i++;
	}
	while (i - j < k)
	{
		p[i] = s2[i - j];
		i++;
	}
	return (p);
}
