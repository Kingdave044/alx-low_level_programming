#include "main.h"

/**
 * _isupper - checks if a charcter is uppercase or not
 * @c: character to be tested
 * Return: return 1 if it is uppercase, 0 if it is not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{ return (1);
	}

	return (0);
}
