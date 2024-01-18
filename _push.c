#include "monty.h"

/**
 * push - Inserts a new item to the stack
 * @stack: the stack list
 * @line_number: the line of the command on the file
 */

void push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	char *n = global.argument;

	create_node(stack, atoi(n));
}
