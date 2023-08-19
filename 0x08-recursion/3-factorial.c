#include "main.h"
/*
 * factorial - afunction that return the factorial
 * @n: is intiger
 * Return: if(n<0) =-1
 * when factorial is 0 returns 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
