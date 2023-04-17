#include "main.h"

/**
 * get_endianness - It checks if a machine is big endian or a little endian
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
