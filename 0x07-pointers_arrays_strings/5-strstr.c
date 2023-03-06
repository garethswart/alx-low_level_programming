#include "main.h"
/**
 * _strstr - locates a substring.
 * any of a set of bytes.
 * @haystack: string to be searched.
 * @needle: string to be found.
 *
 * Return: pointer to beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int k;
	int found = 0;
	char *strstrt;
	

	while (haystack[i] != '\0' && found == 0)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (needle[j] == haystack[k])
			{
				if (needle[j] == '\0')
				{
					found = 1;
					break;
				}
				j++;
				k++;
			}
		}
		i++;
	}
	if (found == 0)
		return (0);
	else
	{
		strstrt = &haystack[i - 1];
		return (strstrt);
	}
}
