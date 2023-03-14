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
	char *ch;

	if (size == 0)
		return (NULL);

	ch = malloc(size * sizeof(char));

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}

	return (ch);
}
