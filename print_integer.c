#include <stdarg.h>
#include <unistd.h>
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
       		count += write(1, "-", 1);
      		num = -num;
	}

   
    	do
	{
		buffer[count++] = num % 10 + '0';
        	num /= 10;
	}
	while (num > 0);

    	while (count > 0) 
	{
        	write(1, &buffer[--count], 1);
	}

    	return (count);
}
