#include "sort.h"
/**
 * insertion_sort_list - function that sorts doubly link list of ints
 * 
 * @list: doubly link list of ints to list
 * 
 * Return:
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *actual, *change, *prior;

	if (!list || !*list)
		return;

	actual = *list;
	while ((actual = actual->next))
	{
		change = actual;
		while (change->prev && change->n < change->prev->n)
		{
			prior = change->prev;
			if (change->next)
				change->next->prev = prior;
			if (prior->prev)
				prior->prev->next = change;
			else
				*list = change;
			prior->next = change->next;
			change->prev = prior->prev;
			change->next = prior;
			prior->prev = change;
			
			print_list(*list);
		}
	}
}
