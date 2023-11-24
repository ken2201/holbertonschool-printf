#include "main.h"
/**
*_printf - print according to a format
*@format:  format wanted
*Return: count if success , -1 if format == NULL , 0 if equal to '\0'
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
		return (-1);
	if (*format == '\0')
		return (0);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if (*format == 'c')
				count += printchar(args);
			else if (*format == 's')
				count += printstring(args);
			else if (*format == '%')
				count += print_percent(args);
			else if (*format == 'd' || *format == 'i')
				count += print_integer(args);
			else
				count += write(1, "%", 1) + write(1, &(*format), 1);
		}
		else
			count += write(1, &(*format), 1);
		format++;
	}
	va_end(args);
	return (count);
}

