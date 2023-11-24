#include "main.h"

/**
 * printstring - print a string of characters
 * @args: variadic list of arguments
 * Return: i the counter
 */
int printstring(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}

	return (i);

}
