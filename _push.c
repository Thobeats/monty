#include "monty.h"

/**
 * push - Inserts a new item to the stack
 * @stack: the stack list
 * @line_number: the line of the command on the file
 */

void push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	char *n = global.argument;

	if (isdigit(n[0]) == 0)
	{
		if (atoi(n) < 0)
		{
			create_node(stack, atoi(n));
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
			return;
		}
	}
	else
	{
		create_node(stack, atoi(n));
	}
}
