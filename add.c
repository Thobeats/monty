#include "monty.h"

/**
 * add - add the top two elements of the stack
 * @stack: the stack list
 * @line_number: the line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *i;
	int addedNode;
	int count;

	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
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
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack);
	addedNode = i->n + i->next->n;
	i->next->n = addedNode;
	i->next->prev = NULL;
	*stack = i->next;
	free(i);
}
