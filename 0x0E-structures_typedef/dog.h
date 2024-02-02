#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Struture representing a dog 
 * @name : Name of the dog 
 * @age : Age of the dog 
 * @owner : Owner of the dog 
 */
#include <stdio.h>
#include <stddef.h>


struct dog
{

	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
