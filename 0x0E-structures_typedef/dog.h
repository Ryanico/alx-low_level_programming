#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog info
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
