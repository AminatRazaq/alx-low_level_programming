#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: the struct of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/*we use dog.h as the header file, so we include all the prototypes*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/
