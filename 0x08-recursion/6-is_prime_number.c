/*
 * file: 0-is_prime_number.c
 */

#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks if a number is divisible
 * @num: the number to be checked
 * @div: the divisor
 *
 * Return: if the number is divisitble - 0
 * 	if the number is not divisible - 1
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (num % div != 0)
		return (is_prime_number(n))
}
