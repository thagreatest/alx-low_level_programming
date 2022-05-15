#include <stdio.h>
#include "function_pointers.h

/**
 * print_name - Printing a name
 * @name: name in question
 * @f: pointer
 * Return: Nothing
 **/

void print_name(char *name, void (*f)(char *c))
{
if (name == NULL || f == NULL)
{
return;
}
else
{
f(name);
}
}

