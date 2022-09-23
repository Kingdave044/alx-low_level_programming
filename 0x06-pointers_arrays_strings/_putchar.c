#include <unistd.h>

/**
 * _putchar - writes the character @c to standard output
 * @c: The character to print
 *
 * Return: a positive number on success and -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
