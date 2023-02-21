#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: On success 0.
 */
void jack_bauer(void)
{
	int ht;
	int h;
	int mt;
	int m;
	int i = 0;

	while (i < 2)
	{
		ht = 0;
		while (ht < 3)
		{
			h = 0;
			while (h < 4)
			{
				mt = 0;
				while (mt < 6)
				{
					m = 0;
					while (m < 10)
					{
						_putchar(ht + '0');
						_putchar(h + '0');
						_putchar(58);
						_putchar(mt + '0');
						_putchar(m + '0');
						_putchar('\n');
						m++;
					}
					mt++;
				}
				h++;
			}
			ht++;
		}
		i++;
	}
}
