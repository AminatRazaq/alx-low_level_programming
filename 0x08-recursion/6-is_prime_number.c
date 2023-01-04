#include "main.h"

/**
 * _eval_num - recursion loop
 * @num: number
 * @i: number to iterate
 * Return: return 1 or 0
 */
int _eval_num(int num, int i)
{
	if (i == num - 1)
		return (1);
	else if (num % i == 0)
		return (0);
	if (num % i != 0)
		return (_eval_num(num, i + 1));
	return (0);
}
/**
 * is_prime_number - evaluate prime number
 * @num: number
 * Return: 1 on prime number else 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (num < 2)
		return (0);
	if (num == 2)
		return (1);
	return (_eval_num(num, i));
}
