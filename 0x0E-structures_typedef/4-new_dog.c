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
	dog_t *puppy;

	puppy = malloc(sizeof(struct dog));
	if (puppy == NULL)
	{
		return (NULL);
	}
	else
	{
		puppy->name = name;
		puppy->age = age;
		puppy->owner = owner;
	}
	return (puppy);
}
