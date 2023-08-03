#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character a to stdout
 * @a: The character to print
 *
 * Return: On success 1
 * on error, -1 is returned, and errno is set approximately.
 */
int _putchar(char a)
{
        return (write(1, &a, 1));
}
