#include "main.h"
/**
 * swap_int - swapping the values of two variables
 * @a: checker
 * @b: checker
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
