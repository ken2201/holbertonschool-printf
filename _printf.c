#include "main.h"

int _printf(const char *format, ...) 
{
       	va_list args;
    	int count = 0;

    	va_start(args, format);

    	while (*format) 
	{
		if (*format == '%' && *(format + 1) != '\0') 
		{
			format++;

            	if (*format == 'c') 
		{
                	count += printchar(args);
            	}
		else if (*format == 's') 
		{
                	count += printstring(args);
            	} 
		else if (*format == '%') 
		{
                	count += print_percent(args);
           
	       	}
		else if (*format == 'd' || *format == 'i') 
		{
                	count += print_integer(args);
            	}
		else 
		{
                	count += write(1, "%", 1);
                	count += write(1, &(*format), 1);
            	}
        	} 
		else
		{
            		count += write(1, &(*format), 1);
        
		}

        	format++;
    	}

    	va_end(args);

    	return count;
}

