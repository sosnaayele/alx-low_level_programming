#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @scr: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *scr, int n)
{
	int j;

	j = 0;
	while (j < n && scr[j] != '\0')
	{
		dest[j] = scr[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
