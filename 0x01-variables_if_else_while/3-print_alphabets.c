#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char lettersl[] = "abcdefghijklmnopqrstuvwxyz";
	char lettersu[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int j = 0;
	
	while (i < 26)
	{
		putchar (lettersl[i]);
		i++;
	}
	while (j < 26)
	{
		putchar (lettersu[j]);
		j++;
	}
	putchar ('\n');
	return (0);
}
