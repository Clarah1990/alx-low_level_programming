#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: On success, pointer to the copied string otherwise NULL
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}
