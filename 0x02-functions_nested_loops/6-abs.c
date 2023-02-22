#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: number to be calculated.
 *
 * Return: On success 1.
 */
int _abs(int n)
{
	int i = n;
	int j = 0;

	if (n > 0)
	{
		while (i > 0)
		{
			i--;
			j++;
		}
	}
	else if (n < 0)
	{
		while (i < 0)
		{
			i++;
			j++;
		}
	}
	return (j);
}
