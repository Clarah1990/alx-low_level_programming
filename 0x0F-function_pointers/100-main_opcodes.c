#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself
 * @argc: number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argc[1]);

	if (bytes < 0)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
