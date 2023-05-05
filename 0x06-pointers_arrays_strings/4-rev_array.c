#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: checker
 * @n: size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, b;

	for (i = n - 1; i >= n / 2; i--)
	{
		b = a[n - 1 -i];
		a[n - 1 - i] = a[i];
		a[i] = b;
	}
}
