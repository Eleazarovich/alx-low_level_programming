#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog properties
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
