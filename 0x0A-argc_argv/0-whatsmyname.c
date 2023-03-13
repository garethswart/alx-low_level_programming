#include <stdio.h>
#include <stdlib.h>
/**
 * main - print file name
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	i = argc;
	i++;
	printf("%s\n", argv[0]);
	exit(0);
}
