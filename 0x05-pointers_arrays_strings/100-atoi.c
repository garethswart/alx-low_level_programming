#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted.
 *
 * Return: 0 for no numbers.
 */
int _atoi(char *s)
{
	int j;
	int intval = 0;
	int charval;
	int numstrt;
	int numend;
	int n = 0;
	int strlen = 0;
	int t;

	while (*(s + strlen) != '\0')
	{
		if (*(s + strlen) > 47 && *(s + strlen) < 58)
		{
			n = 1;
			if (*(s + (strlen - 1)) < 48 && *(s + (strlen - 1)) > 57)
				numstrt = strlen;
		}
		else if (n == 1)
		{
			numend = strlen - 1;
			break;
		}
		strlen++;
	}
	j = numend;
	t = 1;
	for (; j > numstrt; j--)
	{
		charval = *(s + j);
		intval = intval + ((charval - 47) * t);
		t = t * 10;
	}
	return (intval);
}
