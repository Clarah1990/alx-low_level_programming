#include "main.h"
#include <stdlib.h>

/**
 * count_word - counts the number of words containec within a string
 * @str: string to evaluate
 * Return: Number of words contained within a string
 */
int count_word(char *str)
{
	int flag = 0, c, w = 0;

	for (c = 0 ; str[c] != '\0' ; c++)
	{
		if (str[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - function that splits a string into words
 * @str: string to be split
 * Return: If str = NULL, str = "", or the function fails - NULL
 * Otherwise - a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **strings, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	strings = (char **) malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				strings[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	strings[k] = NULL;

	return (strings);
}
