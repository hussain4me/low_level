#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program to display alphabet in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
