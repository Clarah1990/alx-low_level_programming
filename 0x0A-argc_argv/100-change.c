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
	int num, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	while (num > 0)
	{
		coins++;
		if ((num - 25) >= 0)
		{
			num -= 25;
			continue;
		}
		if ((num - 10) >= 0)
		{
			num -= 10;
			continue;
		}
		if ((num - 5) >= 0)
		{
			num -= 5;
			continue;
		}
		if ((num - 2) >= 0)
		{
			num -= 2;
			continue;
		}
		num--;
	}
	printf("%d\n", coins);
	return (0);
}
