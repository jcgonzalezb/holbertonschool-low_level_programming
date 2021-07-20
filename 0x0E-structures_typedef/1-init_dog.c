#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d : Pointer to struct dog
 * @name : Character
 * @age : Float value
 * @owner : Character
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

struct dog my_dog;

init_dog = malloc(sizeof(struct init_dog));
if (init_dog == NULL)
return (NULL);

init_dog->name = name;
init_dog->age = age;
init_dog->owner = owner;
return (init_dog);

}
