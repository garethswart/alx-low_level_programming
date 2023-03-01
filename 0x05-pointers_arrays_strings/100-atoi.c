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
	char charval;
	int intcharval;
	int numstrt;
	int numend;
	int n = 0;
	int strlen = 0;
	int t;

	while (*(s + strlen) != '\0')
	{
		charval = *(s + strlen);
		intcharval = charval;
		if (intcharval > 47 && intcharval < 58)
		{
			n = 1;
			charval = *(s + (strlen - 1));
			intcharval = charval;
			if (intcharval < 48 && intcharval > 57)
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
		intcharval = charval;
		intval = intval + ((intcharval - 47) * t);
		t = t * 10;
	}
	return (intval);
}
