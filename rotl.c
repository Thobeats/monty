#include "monty.h"

/**
 * rotl - moves the top node to the last
 * @stack: the stack list
 * @line_number: the line number
 */

void rotl(stack_t **stack, unsigned int line_number)
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
			(*stack) = first->next;
			first->next->prev = NULL;
			i->next = first;
			first->prev = i;
			first->next = NULL;
		}
	}
}
