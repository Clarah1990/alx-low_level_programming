#include <stdio.h>
#include "main.h"
/**
 * _atoi - a program that coverts a string to an integer
 * @s: string to be coverted
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i, j, k, len, l, digit;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	l = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && l == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			l = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')

					break;
			l = 0;
		}
		i++;
	}
	if (l == 0)
	return (0);

	return (k);
}

/**
 * main - a program that multiplies two numbers
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
