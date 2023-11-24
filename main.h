#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

/** some help**/
int _putchar(char d);

/** print function */
int printchar(va_list args);
int printstring(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);


/** _printf function **/

#endif
