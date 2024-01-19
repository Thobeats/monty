#include "monty.h"

/**
 * nop - This does nothing
 * @stack: the stack list
 * @line_number: the line number
 */

void nop(stack_t **stack __attribute__((unused)), unsigned int line_number __attribute__((unused)))
{
	printf("This does nothing");
}
