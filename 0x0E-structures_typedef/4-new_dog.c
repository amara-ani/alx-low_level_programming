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
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
