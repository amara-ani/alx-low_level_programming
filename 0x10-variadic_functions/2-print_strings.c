#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints all the strings including a separator
 * @separator: character
 * @n: checker
 * Return: nothing (fails) or value and separator (success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *b;

	va_start(a, n);
	for (i = 0; i < n ; i++)
	{
		b = va_arg(a, char *);
		if (b == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", b);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}
