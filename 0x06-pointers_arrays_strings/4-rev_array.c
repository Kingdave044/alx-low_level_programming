#include "main.h"
/**
 * rev_array - a function that reverses the content of an array
 * @a: array of integers
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
