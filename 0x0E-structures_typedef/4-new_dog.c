#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - new dog
  * @name: name of new dog
  * @age: age of new dog
  * @owner: owner of new dog
  *
  * Return: pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		dog2 = malloc(sizeof(dog_t));

		if (dog2 == NULL)
			return (NULL);

		dog2->name = malloc(sizeof(char) * name_l);

		if (dog2->name == NULL)
		{
			free(dog2);
			return (NULL);
		}

		dog2->owner = malloc(sizeof(char) * own_l);

		if (dog2->owner == NULL)
		{
			free(dog2->name);
			free(dog2);
			return (NULL);
		}

		dog2->name = _strcpy(dog2->name, name);
		dog2->owner = _strcpy(dog2->owner, owner);
		dog2->age = age;
	}

	return (dog2);
}
/**
 * _strlen - returns the length of a string
 * @s: string to check length of
 * Return: length of s
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
/**
 * _strcpy - copies a string
 * @dest: destination where string is copied
 * @src: string to be copied
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
