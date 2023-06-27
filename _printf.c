#include "main.h"
/**
 * _printf - print any type of data type to stdout
 * @format: string of char
 * Return: length of the string
 */
int _printf(const char *format, ...)
{
	int i = 0, z = 0, m = 0, d;
	char placeholder = '%';
	char *x, *str;
	char y;
	va_list list;

	if (format == NULL)
		return (-1);

	while (*(format + i))
	{
		if ((*(format + i) != placeholder) && z == 0)
		{
			x = _concat(*(format + i), i);
		}

		else if (z == 1)
		{
			x = _concat(*(format + (i + 1)), i);
		}

		else if (z == 2)
		{
			x = _concat(*(format + (i + 1)), (i + m) - 1);
		}

		else
		{
		va_start(list, format);
		switch (*(format + (i + 1)))
		{
			case 'c':
				x = _concat(va_arg(list, int), i);
				z = 1;
				break;
			case 's':
				str = va_arg(list, char *);
				while (*(str + m))
				{
					y = *(str + m);
					x = _concat(y, (i + m));
					m++;
				}
				z = 2;
				break;
			case 'd':
				z = 3;
				d = va_arg(list, int);
				_putchar2(x);
				if (d < 0)
				{
					d = d * -1;
					_putchar1('-');
				}
				_print_number(d);
				break;
			case 'i':
				z = 3;
				d = va_arg(list, int);
				_putchar2(x);
				if (d < 0)
				{
					d = d * -1;
					_putchar1('-');
				}
				_print_number(d);
				break;
			default:
				break;
		}
			va_end(list);
		}
		i++;
		if (z == 3)
		{
			_putchar1(*(format + (i + 1)));
			_concat('\0', i + 2);
		}
	}
	if (z != 3)
		_putchar2(x);
	return (i);
}
