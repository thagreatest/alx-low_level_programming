#include <stdio.h>
/**
 * main - Starts the function
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\');
	return (0);
}
