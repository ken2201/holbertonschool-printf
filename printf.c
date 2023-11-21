#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *_printf - Entry point
 *@format:
 *
 *Return: (count) the value to return
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int count = 0;

	while (*format != '\0')
	{
	if (*format == '%')
	format++;
	}
	if (*format == 'c')
	{
	count += putchar(va_arg(args, int));
	}
	else if (*format == 's')
	{
	const char *str = va_arg(args, const char *);
	}
	if (str != NULL)
	{
	count += _putchar("%s", str);
	}
	else if (*format == '%')
	{
	count += _putchar('%');
	}
	else
	{
	return (-1);
	 else
	ww
	{
	count += putchar(*format);
	}
	format++;
	}
	va_end(args);
	return (count);
}
