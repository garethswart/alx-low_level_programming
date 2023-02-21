#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: first int to be added.
 *
 * Return: On success 0.
 */
void print_to_98(int n)
{
	int i = 0;
	int j;
	int numb;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			numb = (i * 10) + j;
			if (numb < n)
			{
				continue;
				j++;
			}
			if (i > 0)
				_putchar(i);
			_putchar(j);
			if (numb >= 98)
			{
				j++;
				continue;
			}
			_putchar(44);
			_putchar(32);
			j++;
		}
		i++;
	}
	_putchar('\n');
}
