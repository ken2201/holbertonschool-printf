#include "main.h"
/**
 * print_integer - print an integer
 * @args: variadic list of arguments
 * Return: the number of characters printed
 */
int print_integer(va_list args)
{
	unsigned int abs;
	int num = va_arg(args, int);
	int count = 0;
	char buffer[12];

	if (num < 0)
	{
		write(1, "-", 1);
		abs = -num;
	}
	if (num > 0)
		abs = num;
	while (abs > 0)
	{
		buffer[count] = (abs % 10) + '0';
		abs /= 10;
		count++;
	}
	buffer[count] = '\0';
	if (count == 0)
	{
		buffer[count++] = '0';
	}

	while (count > 0)
	{
		_putchar(buffer[--count]);
	}

	return (count);
}
