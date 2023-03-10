#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched.
 * @accept: characters to be found.
 *
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int k = 0;
	int l = 0;
	int m;

	while (s[i] != '\0' && l == 0)
	{
		j = 0;
		m = 0;
		while (accept[j] != '\0' && m == 0)
		{
			if (s[i] == accept[j])
			{
				k++;
				m = 1;
			}
			j++;
			if (accept[j] == '\0' && m == 0)
			{
				l = 1;
				break;
			}
		}
		i++;
	}
	return (k);
}
