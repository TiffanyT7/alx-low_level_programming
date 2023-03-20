#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;

#endif
