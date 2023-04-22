#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* print last digit of random numbers*/

/* betty style doc for function main goes there */
int main(void)
{
	int n, lasdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lasdig = n % 10;
	if (lasdig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lasdig);
	}
	if (lasdig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lasdig);
	}
	if (lasdig < 6 && lasdig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasdig);
	}
	return (0);
}
