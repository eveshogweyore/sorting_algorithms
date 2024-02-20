#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in
 * ascending order using insertion sort.
 * @list: Pointer to first element in the list.
 *
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *lshift;

	if (list)
	{
		while (curr)
		{
			lshift = curr;

			if (curr->prev)
			{
				curr = curr->next;

				while (lshift->prev)
				{
					if (lshift->prev->n < lshift->n)
						break;

					if (lshift->prev)
						lshift->prev->next = lshift->next;

					if (lshift->next)
						lshift->next->prev = lshift->prev;

					lshift->next = lshift->prev;
					lshift->prev = lshift->next->prev;
					lshift->next->prev = lshift;

					if (lshift->prev)
						lshift->prev->next = lshift;
					else
						*list = lshift;

					print_list(*list);
				}
			}
			else
				curr = curr->next;
		}
	}
}
