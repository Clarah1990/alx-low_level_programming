#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string parameters
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int k;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (k = 0 ; k < 52; k++)
		{
			if (s[i] == data1[k])
			{
				s[i] = datarot[k];
				break;
			}
		}
	}
	return (s);
}
