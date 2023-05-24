#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - function that create new dog
 * @name: sting
 * @age: age of string
 * @owner: owner
 * Return: value (success) or Null (failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *puppy;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		free(puppy);
		return (NULL);
	}
	puppy->name = malloc(nlen * sizeof(puppy->name));
	if (puppy == NULL)
	{
		free(puppy);
		return (NULL);
	}

	for (i = 0; i < nlen; i++)
		puppy->name[i] = name[i];

	puppy->age = age;

	puppy->owner = malloc(olen * sizeof(puppy->owner));
	if (puppy == NULL)
	{
		free(puppy);
		return (NULL);
	}
	for (i = 0; i < olen; i++)
		puppy->owner[i] = owner[i];
	return (puppy);
}
