#include <stdio.h>

/**
 * main - putchar alpha
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <='z'; ch++)
		putchar(ch);

	return (0);
}

int main(void)
{
	printalphabet();
	return (0);
}
