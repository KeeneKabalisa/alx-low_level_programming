#include "main.h"
/**
 * factorial - factorial of number
 *
 * @n: int input
 * Return: factorial answer
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
