#include "lists.h"
/**
 * This list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

//below is a function call
size_t list_len(const list_t *h)
{
    //Declaration
    size_t vanjelly;

    vanjelly = 0;
    while (h != NULL)
    {
        h = h->next;
        vanjelly++;
    }
    return (vanjelly);
}
