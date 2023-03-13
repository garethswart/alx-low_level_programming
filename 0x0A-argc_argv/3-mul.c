#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
		printf("Error\n");
	exit(0);
}
