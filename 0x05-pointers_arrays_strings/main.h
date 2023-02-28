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
 * reset_to_98 - Updates pointer value to 98.
 * @n: The pointer
 *
 * Return: void.
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers.
 * @a: first intiger to be swapped.
 * @b: second intiger to be swapped.
 *
 * Return: void.
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string.
 * @s: string with length to be returned.
 *
 * Return: length of string.
 */
int _strlen(char *s);

/**
 * _puts - prints a string,
 * followed by a new line, to stdout.
 * @str: string to be printed.
 *
 * Return: void.
 */
void _puts(char *str);

/**
 * print_rev - prints a string in reverse,
 * followed by a new line.
 * @s: string to be printed in reverse.
 *
 * Return: void.
 */
void print_rev(char *s);

/**
 * rev_string - Reverses a string.
 * @s: string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: string to be printed.
 *
 * Return: void.
 */
void puts2(char *str);

/**
 * puts_half - prints half of a string,
 * followed by a new line.
 * @str: string to be printed.
 *
 * Return: void.
 */
void puts_half(char *str);

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: string to be printed.
 * @n: number of elements to be printed.
 *
 * Return: void.
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: destination of copy.
 * @src: string to be copied.
 *
 * Return: the pointer to the dest.
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted.
 *
 * Return: 0 for no numbers.
 */
int _atoi(char *s);

#endif
