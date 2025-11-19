#include "main.h"
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
			format++;

			if (*format == '\0')
				return (-1);

			if (*format == 'c')
				count += _Putchar(va_arg(args, int));

			else if (*format == 's')
				count += Print_string(va_arg(args, char *));

			else if (*format == '%')
				count += _Putchar('%');

			else if (*format == 'd' || *format == 'i')
				count += Print_number(va_arg(args, int));
			else
			{
				count += _Putchar('%');
				count += _Putchar(*format);
			}
		}
		else
			count += _Putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
