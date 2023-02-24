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
 * _isupper - checks for uppercase character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _islower(int c);

/**
 * _isdigit - checks for digit character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isdigit(int c);

/**
 * mul- multiplies two intigers.
 * @a: first intiger.
 * @b: second intiger.
 *
 * Return: Multiplied intiger.
 */
int mul(int a, int b);

/**
 * print_numbers - Prints numbers 0 to 9.
 *
 * Return: None.
 */
void print_numbers(void);

/**
 * print_most_numbers - Prints numbers 0 to 9
 * except 2 and 4.
 *
 * Return: None.
 */
void print_most_numbers(void);

/**
 * more_numbers - Prints  10 times numbers
 * 0 to 14.
 *
 * Return: None.
 */
void more_numbers(void);

/**
 * print_line - Prints n lines.
 * @n: number of line spaces.
 *
 * Return: None.
 */
void print_line(int n);

/**
 * print_diagonal - draws a diagonal line.
 * @n: number of line spaces.
 *
 * Return: None.
 */
void print_diagonal(int n);

/**
 * print_square - draws a square.
 * @size: te isze of the square.
 *
 * Return: None.
 */
void print_square(int size);

#endif
