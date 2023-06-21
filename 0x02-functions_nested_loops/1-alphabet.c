#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *  followed by a new line
 *
 * Return: No return
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
