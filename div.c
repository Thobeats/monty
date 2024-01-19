#include "monty.h"

/**
 * div - divide the second top by the top
 * @stack: the stack list
 * @line_number: the line number
 */

void divide(stack_t **stack, unsigned int line_number)
{
	stack_t *i;
	int addedNode;
	int count;

	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack);
	if (i->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	count = 1;

	while (i->next != NULL)
	{
		i = i->next;
		count++;
	}

	if (count < 2)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack);
	addedNode = i->next->n / i->n;
	i->next->n = addedNode;
	i->next->prev = NULL;
	*stack = i->next;
	free(i);
}
