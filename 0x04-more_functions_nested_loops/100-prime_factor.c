#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: returns 0
 */

int main(void)
{
	long number = 612852475143;
	long divisor = 2;
	long larg_prim = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			larg_prim = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", larg_prim);

	return (0);
}
