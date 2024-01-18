#include "monty.h"

/**
 * pall - print all values in the stack
 * @stack: The stack list
 * @line_number: the number of the line
 */

void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	size_t c = 0;

	while ((*stack) != NULL)
	{
		printf("%d\n", (*stack)->n);
		(*stack) = (*stack)->next;
		c++;
	}
}
