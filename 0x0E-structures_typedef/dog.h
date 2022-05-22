#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for the type struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - structure for dog projects.
 * @name : Character
 * @age : Float value
 * @owner : Character
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
