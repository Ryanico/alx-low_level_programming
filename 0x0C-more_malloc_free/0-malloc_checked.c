#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory
 * @b: bytes to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
