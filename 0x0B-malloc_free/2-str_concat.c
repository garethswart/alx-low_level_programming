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
	char *p = (char*)malloc(j + k);
	int i = 0;
	char tmp;

	if (!(char *)malloc(j))
		return (NULL);
	while (i < j)
	{
		tmp = s1[i];
		p[i] = tmp;
		i++;
	}
	while (i - j < k)
	{
		tmp = s2[i - j];
		p[i] = tmp;
		i++;
	}
	return (p);
}
