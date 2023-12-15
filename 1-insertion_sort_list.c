#include "sort.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
* swap_nodes - Function to swap two nodes in a doubly linked list
* @list: output value
* @node1: input value
* @node2: input value
*/

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
if (node1->prev != NULL)
{
node1->prev->next = node2;
}
else
{
*list = node2;
}
if (node2->next != NULL)
{
node2->next->prev = node1;
}
node1->next = node2->next;
node2->prev = node1->prev;
node1->prev = node2;
node2->next = node1;
}

/**
* insertion_sort_list - performs insertion sort on a doubly linked list
* @list: output value
*/

void insertion_sort_list(listint_t **list)
{
listint_t *current;
if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}
current = (*list)->next;
while (current != NULL)
{
listint_t *prev;
while (current->prev != NULL && current->n < current->prev->n)
{
prev = current->prev;
swap_nodes(list, prev, current);
}
current = current->next;
}
}
