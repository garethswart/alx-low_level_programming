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
	int multi;

	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			multi = x * y;
			if (x > 0)
				_putchar(32);
			if (multi > 9)
			{
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
			else
			{
				_putchar(32);
				_putchar(multi + '0');
			}
			if (x > 8)
			{
				x++;
				continue;
			}
			_putchar(44);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
