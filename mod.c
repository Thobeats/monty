#include "monty.h"

/**
 * mod - get the modulus between the top two elements of the stack
 * @stack: the stack list
 * @line_number: the line number
 */

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *i;
	int modNode;
	int count;

	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
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
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack);
	modNode = i->next->n % i->n;
	i->next->n = modNode;
	i->next->prev = NULL;
	*stack = i->next;
	free(i);
}
