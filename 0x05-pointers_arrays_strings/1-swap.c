#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: int input
 * @b: int input
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
