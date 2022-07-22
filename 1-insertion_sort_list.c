#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * prints list after each swap
 *
 * @list: pointer to the linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *prev;

	/* no need to sort if size is less than 2*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current)
	{
		next = current->next;
		/*if 2 adjacent are out of order*/
		while (current->prev && (current->n < current->prev->n))
		{
			/*swap current and current->prev*/
			prev = current->prev;

			current->prev = prev->prev;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;	/*update head of list*/
			prev->next = current->next;
			if (prev->next)
				prev->next->prev = prev;
			current->next = prev;
			prev->prev =current;

			/*print list*/
			print_list(*list);
		}

		current = next;
	}
}
