#include  "main.h"

/**
 * _isalpha -  a function that checks for alphabetic character
 * @c: check if alphabet
 *
 * Return: 1 check true 0 check false
 */

int _isalpha(int c)
{
	if ((c >='a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
