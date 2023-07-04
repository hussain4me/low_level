#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: input
 * @needle: input
 *
 * Return: Alway 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = haystack;

		while (*l == *p && *p !='\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
		return (0);
	}
}
