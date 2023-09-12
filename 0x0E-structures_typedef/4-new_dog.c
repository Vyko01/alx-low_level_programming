#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog to be created
 * @name: name of the dog
 * @age: age of the new dog
 * @owner: of the new dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n1, o1, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
			return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n1 = 0; name[n1]; nl++)
		;
	nl++;
	dog->name = malloc(n1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (o1 = 0; owner[o1]; ol++)
		;
	o++;
	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o1; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
