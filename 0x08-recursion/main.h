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
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to be printed.
 *
 * Return: void.
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string, in reverse.
 * @s: string to be printed.
 *
 * Return: void.
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to be measured.
 *
 * Return: length of string.
 */
int _strlen_recursion(char *s);

/**
 * factorial - returns the factorial of a given number.
 * @n: number.
 *
 * Return: factorial of number.
 */
int factorial(int n);

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number to be powered.
 * @y: exponent.
 *
 * Return: power.
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be rooted.
 *
 * Return: sqare root.
 */
int _sqrt_recursion(int n);

#endif
