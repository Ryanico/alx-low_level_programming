#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the characters c to standard output
 * @c: the char to print
 *
 * REturn: on success 1
 * on error, -1 is returned, and is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
