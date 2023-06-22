#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: input sent number
 *
 * Return: last number
 */

int print_last_digit(int n)
{
	int lastnum;
	
	lastnum = n % 10;
	if(lastnum < 0)
	{
		lastnum = lastnum * -1;
	}
	_putchar(lastnum + '0');
	return (lastnum);
}
