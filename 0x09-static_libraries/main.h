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
 * _strcat - concatenates two strings.
 * @dest: Destination of string appended to.
 * @src: String to be appended.
 *
 * Return: void.
 */
char *_strcat(char *dest, char *src);

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
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched.
 * @accept: characters to be found.
 *
 * Return: pointer to first occurence.
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strncat - concatenates two strings.
 * @dest: Destination of string appended to.
 * @src: String to be appended.
 * @n: Max bytes to be used
 *
 * Return: void.
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _isupper - checks for uppercase character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isupper(int c);

/**
 * _isdigit - checks for digit character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isdigit(int c);

/**
 * _strlen - returns the length of a string.
 * @s: string with length to be returned.
 *
 * Return: length of string.
 */
int _strlen(char *s);

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area.
 * @b: constant byte.
 * @n: number of bytes to be filled.
 *
 * Return: void.
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _puts - prints a string,
 * followed by a new line, to stdout.
 * @str: string to be printed.
 *
 * Return: void.
 */
void _puts(char *str);

/**
 * _strncpy - copies a string.
 * @dest: Destination of coppied string.
 * @src: String to be coppied.
 * @n: Max bytes to be used
 *
 * Return: void.
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _islower - checks for lowercase character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _islower(int c);

/**
 * _strcmp - compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: void.
 */
int _strcmp(char *s1, char *s2);

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isalpha(int c);

/**
 * _abs - computes the absolute value of an integer.
 * @int: Int to be computed.
 *
 * Return: On success 1.
 */
int _abs(int);

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
