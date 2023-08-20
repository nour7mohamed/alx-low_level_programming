#include "main.h"
/**
 * _strstr - find the first occurence of substring
 * @haystack: string to be checked
 * @needle: the char to search for
 * Return: pointer of the located string
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
