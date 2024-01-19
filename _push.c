#include "monty.h"

/**
 * push - Inserts a new item to the stack
 * @stack: the stack list
 * @line_number: the line of the command on the file
 */

void push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	char *n = global.argument;

	if (check_number(n) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}

	create_node(stack, atoi(n));
}
