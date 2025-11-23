#include "main.h"

/* Writes a character to stdout and returns 1 */
int _putchar(char c)
{
return write(1, &c, 1);
}

/* Prints a string and returns number of characters printed */
int print_string(char *str)
{
int count = 0;

if (!str)
str = "(null)";
while (*str)
count += _putchar(*str++);
return count;
}

/* Prints a signed integer and returns number of characters printed */
int print_number(int n)
{
int count = 0;
unsigned int num;

if (n < 0)
{
count += _putchar('-');
num = -n;
}
else
num = n;

if (num / 10)
count += print_number(num / 10);

count += _putchar((num % 10) + '0');
return count;
}

/* Prints an unsigned integer and returns number of characters printed */
int print_unsigned(unsigned int n)
{
int count = 0;

if (n / 10)
count += print_unsigned(n / 10);

count += _putchar((n % 10) + '0');
return count;
}
