#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char letters[] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;
	
	while (i < 26)
	{
		putchar (letters[i]);
		i++;
	}
	putchar ('\n');
	return (0);
}
