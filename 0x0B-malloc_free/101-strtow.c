#include "main.h"
#include <stdlib.h>
/**
 * _wrdc - determines the number of words.
 * @str: string to be measured.
 *
 * Return: string length as int.
 */
int _wrdc(char *str)
{
	int i = 0;
	int wrdfnd;
	int wrds = 0;

	while (str[i] != '\0')
	{
		wrdfnd = 0;
		while (str[i] == 32)
			i++;
		while (str[i] != 32 && str[i] != '\0')
		{
			wrdfnd = 1;
			i++;
		}
		wrds = wrds + wrdfnd;
	}
	return (wrds);
}
/**
 * strtow - splits a string into words.
 * @str: string to be split.
 *
 * Return: pointer to array of words.
 */
char **strtow(char *str)
{
	int wrd;
	int chr = 0;
	int len;
	int k;
	int wrds = _wrdc(str);
	char **p = (char **)malloc((wrds * sizeof(char *)) + 1);

	if (str == NULL || str == 0 || !p || wrds < 1)
	{
		free(p);
		return (NULL);
	}
	for (wrd = 0; wrd < wrds; wrd++)
	{
		len = 0;
		while (str[chr] == 32)
			chr++;
		while (str[chr] != 32 && str[chr] != '\0')
		{
			len++;
			chr++;
		}
		p[wrd] = (char *)malloc((len * sizeof(char)) + 1);
		if (!p)
		{
			for (wrd = 0; wrd < wrds; wrd++)
				free(p[wrd]);
			free(p);
			return (NULL);
		}
		chr = chr - len;
		for (k = 0; k < len; k++)
		{
			p[wrd][k] = str[chr];
			chr++;
		}
	}
	p[wrd] = NULL;
	return (p);
}
