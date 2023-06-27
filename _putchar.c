#include "main.h"
/**
 * _concat - writes the character c to stdout
 * @c: The character to be concatinated
 * @i: index of char
 * Return: pointer to string
 */
char *_concat(char c, int i)
{
	char *ptr;
	char buffer[1024];
	buffer[i] = c;
	ptr = buffer;
	return (ptr);
}

/**
 * _putchar2 - prints a string
 * @buffer: string of char
 * Return: 1 ON success and -1 on faliure
 */
int _putchar2(char *buffer)
{
	int i = 0;

	while (*(buffer + i))
	{
		i++;
	}
	return (write(1, buffer, i));
}

/**
 * _putchar1 - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar1(char c)
{
	return (write(1, &c, 1));
}

int _putnum(int x)
{
        return (write(1, &x, 1));
}
int count(int x)
{
	int i = 0;
	while(x / 10)
		i++;
	return i;
}
