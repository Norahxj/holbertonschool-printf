#include "main.h"
/**
 * _putchar - writes a character to stdout
 * @c: character to print
 *
 * Return: 1 on success
 */
int _putchar (char c)
{
return (write(1, &c, 1));
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
