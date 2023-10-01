#include <stdio.h>
/**
 * prime_finder - finds out if a number is prime recursively
 *
 * @x: number to determine if prime
 * @y: number to check if divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int div(int n1, int n2)
{
	if (n1 == n2)
		return (1);
	if (!(n1 % n2))
		return (0);
	return (div(n1, n2 + 1));
}
/**
 * is_prime_number - returns if a number is prime
 *
 * @n: number to determine primeness of
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (div(n, 2));
}
