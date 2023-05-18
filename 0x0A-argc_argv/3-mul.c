#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies arguments passed
 * @argc: counts arguments
 * @argv: holds array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, count;

	count = 1;
	if (argc < 2)
	{
		printf("Error \n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			count *= atoi(argv[i]);
		}
		printf("%d \n", count);
	}
	return (0);
}
