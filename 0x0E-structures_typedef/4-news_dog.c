#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
*
* Return: NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenN, lenO;

	struct dog *n_dog = NULL;

	lenN = 0;
	while (name[lenN] != '\0')
		lenN++;

	lenO = 0;
	while (owner[lenO] != '\0')
		lenO++;
