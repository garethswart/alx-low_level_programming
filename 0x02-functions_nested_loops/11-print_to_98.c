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
	int a = n;
	int b;
	int t;

	while (a < 99)
	{
		b = a;
		j = 0;
		if (a < 0)
			_putchar(45);
		for (t = 1000000000; t > 0;)
		{
			i = (b / t) % 10;
			if (i != 0 || j != 0 || a == 0)
			{
				_putchar(i + '0');
				j = 1;
			}
			if (a == 0)
				break;
			t = t / 10;
		}
		a++;
		if (a > 98)
			break;
		_putchar(44);
		_putchar(32);
	}
	_putchar('\n');
}
