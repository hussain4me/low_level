#include "main.h"

/**
 * _abs -  a function that computes the absolute value of an integer
 * @n: print absolute
 *
 * Return: +1  (value greater than zero) -1 (value less than zero)
 */

int _abs(int n)
{
	int abs_val;

	if (n < 0)
	{
		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
