#include "main.h"
/**
 * print_times_table - prints the n times table,
 * starting with 0, between 0 and 15.
 * @n: number to be multiplied.
 *
 * Return: On success 0.
 */
void print_times_table(int n)
{
	int x;
	int y = 0;
	int no;
	int i;
	int j;
	int t;

	while (y < (n + 1) && n >= 0 && n <= 15)
	{
		x = 0;
		while (x < (n + 1))
		{
			no = x * y;
			j = 0;
			for (t = 1000; t > 0;)
			{
				i = (no / t) % 10;
				if (i == 0 && j == 0 && x != 0 && t > 1)
					_putchar(32);
				else
				{
					_putchar(i + '0');
					j = 1;
				}
				if (x == 0)
					break;
				t = t / 10;
			}
			x++;
			if (x > n)
				continue;
			_putchar(44);
		}
		_putchar('\n');
		y++;
	}
}
