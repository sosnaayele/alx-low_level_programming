#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to new memory space.
 * @str: string.
 * Return: Pointer or NULL.
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *ch;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	ch = malloc((sizeof(char) * i) + 1);

	if (ch == NULL)
		return (NULL);

	while (a < i)
	{
		ch[a] = str[a];
		a++;
	}

	ch[a] = '\0';
	return (ch);
}
