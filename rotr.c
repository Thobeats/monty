#include "monty.h"

/**
 * rotr - moves the last node to the top
 * @stack: the stack list
 * @line_number: the line number
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *first;
	stack_t *i;
	int count;

	(void)line_number;
	if ((*stack) != NULL)
	{
		first = (*stack);
		i = (*stack);
		count = 0;

		while (i->next != NULL)
		{
			i = i->next;
			count++;
		}

		if (count > 0)
		{
			i->prev = NULL;
			i->next = first;
			first->prev = i;
			(*stack) = i;
		}
	}
}
