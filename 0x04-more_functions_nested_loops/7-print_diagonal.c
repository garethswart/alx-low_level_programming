#include "main.h"
/**
 * print_diagonal - draws a diagonal line.
 * @n: number of line spaces.
 *
 * Return: None.
 */
void print_diagonal(int n)
{
	int i;
	int j = 0;

	if (n > 0)
	{
		while (j < n);
		{
			i = 0;
			while (i < j)
			{
				_putchar(32);
				i++;
			}
			_putchar(92);
			_putchar('\n');
			j++;
		}
	}
	else
		putchar('\n');
}
