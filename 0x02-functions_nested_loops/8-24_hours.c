#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: On success 0.
 */
void jack_bauer(void)
{
	int h;
	int m;
	int k = 0;
	int i;
	int t;

	while (k < 1)
	{
		h = 0;
		while (h < 24)
		{
			m = 0;
			while (m < 60)
			{
				for (t = 10; t > 0;)
				{
					i = (h / t) % 10;
					_putchar(i + '0');
					t = t / 10;
				}
				_putchar(58);
				for (t = 10; t > 0;)
				{
					i = (m / t) % 10;
					_putchar(i + '0');
					t = t / 10;
				}
				_putchar('\n');
				m++;
			}
			h++;
		}
		k++;
	}
}
