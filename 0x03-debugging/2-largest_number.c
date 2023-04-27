#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest, i;

	for (i = 1; i <= 3; i++)
	{
		if (a > b)
		{
			largest = b;
			b =  a;
			a = largest;
		}
		if (b > c)
		{
			largest = c;
			c =  b;
			b = largest;
		}
		if (c < a)
		{
			largest = a;
			a =  c;
			c = largest;
		}
	}
	largest = c;
	return (largest);
}
