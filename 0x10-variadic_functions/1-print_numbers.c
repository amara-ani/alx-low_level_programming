#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints all the numbers including a separator
 * @separator: character
 * @n: checker
 * Return: nothing (fails) or value and separator (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);
	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(a, unsigned int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	va_end(a);
	printf("\n");
}
