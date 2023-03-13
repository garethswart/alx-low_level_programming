#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i = 1;
	int j;
	int sum = 0;

	if (argc < 1)
		printf("0");
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(1);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	exit(0);
}
