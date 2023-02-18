#include <stdio.h>
/**
 * main - Entry point
 * Description: '3-print_alphabets.c'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettersl[] = "abcdefghijklmnopqrstuvwxyz";
	char lettersu[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int j = 0;

	while (i < 26)
	{
		putchar(lettersl[i]);
		i++;
	}
	while (j < 26)
	{
		putchar(lettersu[j]);
		j++;
	}
	putchar('\n');
	return (0);
}
