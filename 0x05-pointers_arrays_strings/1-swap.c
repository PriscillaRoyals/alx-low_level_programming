#include <stdio.h>
#include "main.h"
/**
 * swap_int - function that swap the values of two integer
 * @a: first integer
 * @b: second integer
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
