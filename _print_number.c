#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_number(int c)
{
	if(c != 0)
	{
	_print_number(c / 10);

	_putnum((c % 10) + '0');
	}
}
