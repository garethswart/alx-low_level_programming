#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: On success 0.
 */
void times_table(void)
{
	int x;
	int y = 0;
	int n;
	int i;
	int j;
	int t;

	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			n = x * y;
			j = 0;
			for (t = 100; t > 0;)
			{
				i = (n / t) % 10;
				if (i == 0 && j == 0 && x != 0 && t > 1)
					_putchar(32);
				else
					_putchar(i + '0');
				if (x == 0)
					break;
				else
					j = i;
				t = t / 10;
			}
			x++;
			if (x > 9)
				continue;
			_putchar(44);
		}
		_putchar('\n');
		y++;
	}
}
