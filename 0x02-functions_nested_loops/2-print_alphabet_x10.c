#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: No return
 */

void print_alphabet_x10(void)
{
	int n;
	char letter;


	for (n = 0; n < 10; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}

}
