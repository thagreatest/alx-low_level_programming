#include "main.h"
/**
 *  _strlen - Reeturns the length of the string
 * *@s : input
 * Return: void
 */

int _strlen(char *s)
{
	int length = 0;

	while(*s != 0)
	{
		length++;
		s++;
	}

	return (length);
}

