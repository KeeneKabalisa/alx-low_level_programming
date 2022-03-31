#include "main.h"
/**
 * isPrime - supplementary function
 *
 * @n: int input
 * @x: int input
 * Return: output
 */
int isPrime(int n, int x)
{
	if (n <= 1 || (n != x && n % x == 0))
	{
		return (0);
	}
	else if (n == x)
	{
		return (1);
	}
	return (isPrime(n, x + 1));
}
/**
 * is_prime_number - finds out if num is prime
 *
 * @n: int input
 * Return: 1 if num is prime, 0 if not
 */
int is_prime_number(int n)
{
	return (isPrime(n, 2));
}
