#include <stdio.h>
#include <stdlib.h>

#ifndef DOG_H
#define DOG_H

/**
 * Here you can find the declaration of all functions
 */

int _putchar(char c);
struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - structure for dog projects.
 * @name : Character
 * @age : Float value
 * @owner : Character
 */

struct dog
{
char* name;
float* age;
char* owner;
};

/**
 * dog_t as a new name for the type struct dog
 */

typedef struct dog dog_t;

#endif