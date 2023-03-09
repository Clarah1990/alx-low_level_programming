#include "main.h"
/**
 * _strlen_recursion - returns the length of the string
 * @s: string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each charater of the string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: .
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palidrome - detects if a string is palidrome
 * @s: string
 * Return: 1 if s is a palidrome, 0 if not
 */
int is_palidrome(char *s)
{
	if (*s)
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
