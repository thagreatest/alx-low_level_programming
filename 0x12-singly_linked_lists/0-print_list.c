#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list
 * @m: The list_t list
 *
 * Return: The number of nodes in m
**/

size_t print_list(const list_t *m)
{
	size_t nodes = 0;

	while (m)
	{
		if (m->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", m->len, m->str);

		nodes++;
		m = m->next;
	}

	return (nodes);
}

