#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: char pointer type
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;

	return (n);
}
