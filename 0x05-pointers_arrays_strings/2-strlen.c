#include "main.h"
#include <stdio.h>

/**
 * _strlen -  returns the length of a string.
 * @str: string to be checked length of
 * Return: length of string @str
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
