#include "sort.h"
/**
 * swpnode - swaps two nodes in a doubly linked list.
 * @x: pointer to the first node to be swapped.
 * @y: pointer to the 2nd node to be swapped.
 * Return: nothing.
 */
void swpnode(listint_t **x, listint_t **y)
{
	listint_t *temp;

	temp = y;
	y = x;
	x = temp;
}
/**
 * cocktail_sort_list - sorts doubly linked w/ cocktail shaker algo.
 * @list: pointer to the head node of doubly linked list.
 * Return: nothing.
 */
void cocktail_sort_list(listint_t **list)
{
	int i, swp;
	listint_t *curr;

	if (list)
	{
		curr = list;
		swp = 1;
		i = 0;

		while (swp != 0)
		{
			swp = 0;

			while (curr->next)
			{
				while (curr->next->n)
				{
					i++;
					if (curr->n < (curr->next->n))
					{
						curr = curr->next;
						break;
					}
					swpnode(curr, curr->next);
					swp = 1;
				}
				
				if (curr->next == NULL || swp == 0)
					break;
				curr = curr->next;
			}

			while (i >= 0)
			{
				while (curr->prev->n)
				{
					i--;
					if (curr->n > (curr->prev->n))
					{
						curr = curr->prev;
						break;
					}
					swpnode(curr, curr->prev);
					swp = 1;
				}
				if (curr->prev == NULL || swp == 0)
					break;
				curr = curr->prev;
			}
		}
	}
}
