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

#endif
