#include "main.h"
/**
 * print_integer - print an integer
 * @args: variadic list of arguments
 * Return: the number of characters printed
 */
int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	char buffer[12];

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	while (num > 0)
	{
		buffer[count] = (num % 10) + '0';
		num /= 10;
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
