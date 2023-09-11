#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog info
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 */

/**
 * dog_t - new name fot struct dog
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
