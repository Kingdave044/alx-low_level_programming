#include "main.h"

/**
 * malloc_checked - allocate a certain amount of memoy
 * @b: number of bytes to allocate
 * Return: an address to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
