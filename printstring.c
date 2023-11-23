#include "main.h"

/**
 * printString - print a string of characters
 * @args: variadic list of arguments
 */
int printstring(va_list args)
{
	char *str = va_arg(args, char *);

	while (*str)
	{
		putchar(*str);
		str++;
	}

}