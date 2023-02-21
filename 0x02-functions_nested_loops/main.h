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
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: On success 1.
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: On success 1.
 */
void print_alphabet_x10(void);
/**
 * _islower - checks for lowercase character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _islower(int c);
/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isalpha(int c);
/**
 * print_sign - prints the sign of a number.
 * @n: The number to check
 *
 * Return: On success 1.
 */
int print_sign(int n);
/**
 * _abs - computes the absolute value of an integer.
 * @int: Int to be computed.
 *
 * Return: On success 1.
 */
int _abs(int);
/**
 * print_last_digit - prints the last digit of a number.
 * @int: int that last number is taken from.
 *
 * Return: On success 1.
 */
int print_last_digit(int);
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: On success 1.
 */
void jack_bauer(void);
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: On success 0.
 */
void times_table(void);
/**
 * add - adds two integers and returns the result.
 * @a: first int to be added.
 * @b: second int to be added..
 *
 * Return: On success 0.
 */
int add(int a, int b);
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: first int to be added.
 *
 * Return: On success 0.
 */
void print_to_98(int n);
#endif
