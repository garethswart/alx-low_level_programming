#include <stdio.h>
/**
 * main - Entry point
 * Description: '7-print_tebahpla.c'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	while (i < 26)
	{
		putchar(letters[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
