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
#endif
