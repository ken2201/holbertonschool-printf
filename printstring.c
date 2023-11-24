#include "main.h"

/**
 * printString - print a string of characters
 * @args: variadic list of arguments
 * @i: the counter
 * Return: i the counter
 */
int printstring(va_list args)
{
	char *str = va_arg(args, char *);

	int i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}

	return (i);

}
