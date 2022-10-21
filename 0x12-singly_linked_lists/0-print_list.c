#include "lists.h"

/**
 * print_list - this is a function that prints all the element of a string
 * @h: a pointer to the list
 *
 * Return: the number of the nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[0] (nil)\n");
		}
		count += 1;
		h = h->next;
	}
	return (count);
	printf("\n");
}
