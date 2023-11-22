#include <stdio.h>
#include <stdarg.h>
/**
 * printchar - print a character
 * @args: variadic list of the function
 * Return: 1 if success
 */

int printchar(va_list args)
{
	_putchar(va_arg(args,int));

	return (1);
}
