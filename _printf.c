#include "main.h"
#include <stdarg.h>

/* Custom _printf supporting: c, s, %, d, i, u */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

if (!format)
return -1;

va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == '\0')
{
va_end(args);
return -1;
}

if (*format == 'c')
count += _putchar(va_arg(args, int));
else if (*format == 's')
count += print_string(va_arg(args, char *));
else if (*format == '%')
count += _putchar('%');
else if (*format == 'd' || *format == 'i')
count += print_number(va_arg(args, int));
else if (*format == 'u')
count += print_unsigned(va_arg(args, unsigned int));
else
{
count += _putchar('%');
count += _putchar(*format);
}
}
else
{
count += _putchar(*format);
}
format++;
}

va_end(args);
return count;
}
