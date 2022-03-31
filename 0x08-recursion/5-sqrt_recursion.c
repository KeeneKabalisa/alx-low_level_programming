#include "main.h"

/**
 * _sqrt_recur - supplimentary function
 *
 * @n: int input
 * @x: numbers to multiply to find if they form n
 * Return: Result for _sqrt_recursion
 */
int _sqrt_recur(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_recur(n, x + 1));
}

/**
 * _sqrt_recursion - finds natural square root
 *
 * @n: int input
 * Return: result of natural square root, -1 if none
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recur(n, 0));
}
