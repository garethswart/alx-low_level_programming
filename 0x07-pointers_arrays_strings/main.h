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
 * _memset - fills memory with a constant byte.
 * @s: memory area.
 * @b: constant byte.
 * @n: number of bytes to be filled.
 *
 * Return: void.
 */
char *_memset(char *s, char b, unsigned int n);

#include "main.h"
/**
 * _memcpy - copies a memory area.
 * @dest: memory area copied to.
 * @src: memory area to be coppied from.
 * @n: number of bytes to be filled.
 *
 * Return: memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string.
 * @c: character to be found.
 * @s: string to be searched.
 *
 * Return: pointer to first occurence.
 */
char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched.
 * @accept: characters to be found.
 *
 * Return: pointer to first occurence.
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for
 * any of a set of bytes.
 * @s: string to be searched.
 * @accept: characters to be found.
 *
 * Return:pointer to the byte in s that
 * matches one of the bytes.
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring.
 * any of a set of bytes.
 * @haystack: string to be searched.
 * @needle: string to be found.
 *
 * Return: beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - prints the chessboard.
 * @a: chessboard.
 *
 * Return: none.
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: square matrix.
 * @size: size of square.
 *
 * Return: none.
 */
void print_diagsums(int *a, int size);

/**
 * set_string -  sets the value of a pointer to a char.
 * @s: pointer to be set.
 * @to: char to set pointer to.
 *
 * Return: none.
 */
void set_string(char **s, char *to);

#endif
