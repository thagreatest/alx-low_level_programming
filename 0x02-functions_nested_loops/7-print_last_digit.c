#include "main.h"
/**
 * print_last_digit - returns last digit of a number
 * @n: takes in the argument
 * Return: integer value
 */

int print_last_digit(int n)
{
int last;

last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');

return (last);
}
