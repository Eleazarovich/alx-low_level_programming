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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
