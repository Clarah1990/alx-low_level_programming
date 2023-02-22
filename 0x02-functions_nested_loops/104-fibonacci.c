#include <stdio.h>
/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i;
	unsigned int bef = 1;
	unsigned int aft = 2;
	unsigned int l = 1000000000;
	unsigned int bef1;
	unsigned int bef2;
	unsigned int aft1;
	unsigned int aft2;

	printf("%lu", bef);

	for (i = 1 ; i < 91 ; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / l);
	bef2 = (bef % l);
	aft1 = (aft / l);
	aft2 = (aft % l);

	for (i = 92 ; i < 99 ; i++)
	{
		printf(", %lu", aft1 + aft2 / l);
		printf("%lu", aft2 % l);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
