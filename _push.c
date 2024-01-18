#include "monty.h"

/**
 * push - Inserts a new item to the stack
 * @stack: the stack list
 * @line_number: the line of the command on the file
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *n = oparg;

    if ((isdigit(atoi(n))) == 0)
    {
        fprintf(stderr, "L%u: usage: push integer", line_number);
        exit(EXIT_FAILURE);
        return;
    }


}
