#include "lists.h"

/**
 * Function of print_list  - prints list.
 * parameter list
 * Return: struct (Structure)
 */

size_t print_list(const list_t *h)
{
	//declaration
	size_t list_node;

	//loop
	list_node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		list_node++;
	}
	return (list_node);
}
