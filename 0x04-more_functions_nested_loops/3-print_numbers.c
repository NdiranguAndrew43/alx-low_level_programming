#include "main.h"
#include <unistd.h>

/**
*print_numbers - code to print numbers from 0 to 9, followed by a newline
*Return: the numbers printed by the code from 0 to 9
*/

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	_putchar(a + '0');
	}
	_putchar('\n');
}
