#include <stdlib.h>
#include "main.h"
/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size: size of allocated memory
 * @new_size: new size of the memory
 * Return: pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrl;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptrl = malloc(new_size);
	if (!ptrl)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptrl[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptrl[i] = old_ptr[i];
	}
	free(ptr);
	return (ptrl);
}
