#include "main.h"
/**
 * _putchar - writes a character to stdout
 * @c: character to print
 *
 * Description:
 * Uses a static buffer of 1024 chars.
 * Write is called only when buffer is full or when flushed.
 *
 * Return: 1 on success
 */
int _putchar (char c)
{
	static char buffer[1024];
	static int index;

	if (c == -1) /* flush request */
	{
		if (index > 0)
			write(1, buffer, index);
		index = 0;
		return (1);
	}

	buffer[index++] = c;

	if (index == 1024)
	{
		write(1, buffer, 1024);
		index = 0;
	}

	return (1);
}

/**
 * print_string - prints a string
 * @str: string to print
 *
 * Return: Number of characters printed
 */

int print_string(char *str)
{

int count = 0;
if (!str)
str = "(null)";
while (*str)
count += _putchar(*str++);
return (count);
}

/**
 * print_number - prints an integer (not used in task 0)
 * @n: Integer to print
 *
 * Return: vumber of characters printed
 */

int print_number(int n)
{

int count = 0;
unsigned int num;
if (n < 0)
{
count += _putchar ('-');
num = -n;
}
else
num = n;

if (num / 10)
count += print_number(num / 10);
count += _putchar (num % 10 + '0');
return (count);
}


/**
 * print_binary - prints an unsigned int in binary
 * @n: number to convert and print
 *
 * Return: number of characters printed
 */
int print_binary(unsigned int n)
{
int count = 0;
if (n / 2)
count += print_binary(n / 2);
count += _putchar((n % 2) + '0');
return (count);
}
/**
 * print_unsigned - Prints an unsigned integer
 * @n: Unsigned integer to print
 *
 * Return: Number of characters printed
 */
int print_unsigned(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_unsigned(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}

/**
 * print_octal - Prints an unsigned int in octal
 * @n: Number to convert and print
 *
 * Return: Number of characters printed
 */
int print_octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += print_octal(n / 8);

	count += _putchar((n % 8) + '0');

	return (count);
}

/**
 * print_hex - Prints an unsigned int in lowercase hexadecimal
 * @n: Number to convert and print
 *
 * Return: Number of characters printed
 */
int print_hex(unsigned int n)
{
	int count = 0;
	char *hex = "0123456789abcdef";

	if (n / 16)
		count += print_hex(n / 16);

	count += _putchar(hex[n % 16]);

	return (count);
}

/**
 * print_HEX - Prints an unsigned int in uppercase hexadecimal
 * @n: Number to convert and print
 *
 * Return: Number of characters printed
 */
int print_HEX(unsigned int n)
{
	int count = 0;
	char *hex = "0123456789ABCDEF";

	if (n / 16)
		count += print_HEX(n / 16);

	count += _putchar(hex[n % 16]);

return (count);
}

/**
 * print_S - prints a string, handling non-printable characters as \xHH
 * @str: string to print
 *
 * Return: number of characters printed
 */
int print_S(char *str)
{
    int count = 0;
    int i;
    unsigned char c;
    char hex[2];

    if (!str)
        return (print_string("(null)"));

    for (i = 0; str[i] != '\0'; i++)
    {
        c = str[i];

        if (c < 32 || c >= 127)
        {
            count += _putchar('\\');
            count += _putchar('x');

            hex[0] = "0123456789ABCDEF"[c / 16];
            hex[1] = "0123456789ABCDEF"[c % 16];

            count += _putchar(hex[0]);
            count += _putchar(hex[1]);
        }
        else
        {
            count += _putchar(c);
        }
    }

    return (count);
}
