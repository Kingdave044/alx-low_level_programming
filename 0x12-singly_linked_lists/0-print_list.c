#include "lists.h"

/**
 * print_list - this is a function that prints all the element of a string
 * @h: a pointer to the list
 *
 * Return: the number of the nodes
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[0] (nil)\n");

	else
		printf("[%u] %s\n", h->len, h->str);
	return (1 + print_list(h->next));
}
