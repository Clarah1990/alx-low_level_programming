#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0 ; i < n-- ; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
