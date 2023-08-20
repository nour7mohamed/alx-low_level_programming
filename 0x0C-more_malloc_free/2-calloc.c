#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc -  allocates memory for an array
 * of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory.
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
