#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: array of strings containing arguments
 * Return: On success, a pointer to the string, NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (j < ac)
	{
		while (av[j][k])
		{
			i++;
			k++;
		}
		k = 0;
		j++;
	}
	str = malloc((sizeof(char) * i) + ac + 1);

	j = 0;
	while (av[j])
	{
		while (av[j][k])
		{
			str[l] = av[j][k];
			l++;
			k++;
		}
		str[l] = '\n';

		k = 0;
		l++;
		j++;
	}
	l++;
	str[l] = '\0';
	return (str);
}
