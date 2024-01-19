#include "monty.h"

/**
 * sub - get the difference between the top two elements of the stack
 * @stack: the stack list
 * @line_number: the line number
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *i;
	int addedNode;
	int count;

	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack);
	count = 1;

	while (i->next != NULL)
	{
		i = i->next;
		count++;
	}

	if (count < 2)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack);
	addedNode = i->next->n - i->n;
	i->next->n = addedNode;
	i->next->prev = NULL;
	*stack = i->next;
	free(i);
}
