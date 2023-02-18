#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char letters[] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;
	
	while (i < 24)
	{
		putchar (letters[i]);
		i++;
	}
	putchar ('\n');
	return (0);
}
