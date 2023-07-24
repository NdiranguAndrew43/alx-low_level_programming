#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers a and b
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
/*function that swaps the values of two integers a and b*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
