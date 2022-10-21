#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 *  -----topestarr----- october 2022
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (a)
	{
		if (!a->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", a->len, a->str);
		a = a->next;
		s++;
	}

	return (s);
}
