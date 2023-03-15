#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * @c: char to be initialised with.
 *
 * Return: pointer to array.
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated.
 *
 * Return: pointer to array.
 */
char *_strdup(char *str);

/**
 * str_concat -  concatenates two strings.
 * @s1: first string to be concatinated.
 * @s2: Second string to be concatinated.
 *
 * Return: pointer to array.
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid -  returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width of array.
 * @height: height of array.
 *
 * Return: pointer to array.
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: grid to be freed.
 * @height: height of array.
 *
 * Return: void.
 */
void free_grid(int **grid, int height);

/**
 * argstostr - concatenates all the arguments.
 * @ac: argc.
 * @av: argv.
 *
 * Return: void.
 */
char *argstostr(int ac, char **av);

/**
 * strtow - splits a string into words.
 * @str: string to be split.
 *
 * Return: pointer to array of words.
 */
char **strtow(char *str);

#endif
