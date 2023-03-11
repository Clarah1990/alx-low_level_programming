#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: the number of arguments
 * @argv:array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0 ; i < 5 && num >= 0 ; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
