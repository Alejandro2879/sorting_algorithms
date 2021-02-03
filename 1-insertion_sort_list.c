#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Insertion sort algorith in a Double linked List.
 * @list: pointer to the list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *p_next, *p_prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	if (list && *list && (*list)->next)
	{
		current = (*list)->next;
		p_prev = current->prev;
		p_next = current->next;
		while (current)
		{
			if (current->n < p_prev->n)
			{
				while (p_prev && current->n < p_prev->n)
				{
					if (p_next)
						p_next->prev = p_prev;
					current->next = p_prev;
					current->prev = p_prev->prev;
					if (p_prev->prev)
						p_prev->prev->next = current;
					p_prev->prev = current;
					p_prev->next = p_next;
					p_next = p_prev;
					p_prev = current->prev;
					if ((*list)->prev)
						*list = (*list)->prev;
					print_list(*list);
				}
			}
			current = p_next;
			if (current)
			{
				p_next = current->next;
				p_prev = current->prev;
			}
		}
	}
}
