#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 i set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
