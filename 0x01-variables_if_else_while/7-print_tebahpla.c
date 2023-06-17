#include <stdio.h>

/**
 * main - A program that print lowercase alphabet in revers
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
