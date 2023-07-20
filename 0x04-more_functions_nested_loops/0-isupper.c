#include "main.h"

/**
 * _isupper - code checks for uppercase letter
 * @c: uppercase letter being checked for
 * Return: always 1 if c is uppercase and 0 if otherwise
*/

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
