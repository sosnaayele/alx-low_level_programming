#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of charachter.
 * @c: charachter.
 * @size: the size of array.
 * Return: pointer or Null.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
