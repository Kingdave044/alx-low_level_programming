#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#define null (void *)0
#define TRUE 1
#define FALSE 0
#define is ==
#include <stdarg.h>
#include <stdio.h>

/**
 * struct printer - A new struct type defining a printer
 * @symbol: a symbol representing a data type
 * @print: a function pointer to a function that prints a data
 * 		type corresponding to a symbol
 */

typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
