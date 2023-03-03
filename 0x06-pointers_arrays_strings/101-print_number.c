#include "main.h"
/**
 * print_number - prints an integer.
 * @n: Number to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
	int t = 1000000000;
	int i = n;
	int j = 0;
	int a = 0;

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
	if (n < 0)
		_putchar('-');
	for (; t > 0;)
	{
		i = (j / t) % 10;
		if (i > 0 || a == 1 || t == 1)
		{
			_putchar(i + '0');
			a = 1;
		}
		t = t / 10;
	}
}
