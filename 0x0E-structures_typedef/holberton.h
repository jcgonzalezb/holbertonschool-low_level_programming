#include <stdio.h>
#include <stdlib.h>

#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * Here you can find the declaration of all functions
 */

int _putchar(char c);
struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif