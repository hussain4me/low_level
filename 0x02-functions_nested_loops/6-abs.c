#include "main.h"

/**
 * _abs -  a function that computes the absolute value of an integer
 *
 * Return: +1  (value greater than zero) -1 (value less than zero)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
