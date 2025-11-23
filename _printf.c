#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - Produces output according to a format
 * @format: Format string containing format specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);
while (*format)
{
if (*format == '%')
{
int plus_flag = 0, space_flag = 0, hash_flag = 0;
format++;
if (*format == '\0')
return (-1);

/* Read flags */
while (*format == '+' || *format == ' ' || *format == '#')
{           
if (*format == '+') plus_flag = 1;
else if (*format == ' ') space_flag = 1;
else if (*format == '#') hash_flag = 1;
format++;
}
if (*format == 'c')
count += _putchar(va_arg(args, int));

else if (*format == 's')
count += print_string(va_arg(args, char*));

else if (*format == '%')
count += _putchar('%');

else if (*format == 'd' || *format == 'i')
{
int n = va_arg(args, int);
if (n >= 0)
{
if (plus_flag) count += _putchar('+');
else if (space_flag) count += _putchar(' ');
}
count += print_number(n);
}

else if (*format == 'b')
count += print_binary(va_arg(args, unsigned int));

else if (*format == 'u')
count += print_unsigned(va_arg(args, unsigned int));

else if (*format == 'o')
{
unsigned int n = va_arg(args, unsigned int);
if (hash_flag) count += _putchar('0');
count += print_octal(n);
}

else if (*format == 'x' || *format == 'X')
{
unsigned int n = va_arg(args, unsigned int);
if (hash_flag) { count += _putchar('0'); count += _putchar(*format); }
if (*format == 'x') count += print_hex(n);
else count += print_HEX(n);
}

else if (*format == 'S')
count += print_S(va_arg(args, char *));

else if (*format == 'p')
count += print_pointer(va_arg(args, void *));

else
{
count += _putchar('%');
count += _putchar(*format);
}
}
else
count += _putchar(*format);

format++;
}

_putchar(-1); /* flush buffer */
va_end(args);
return (count);
}
