#include "monty.h"

/**
 * pchar - Prints out the char at the top of a stack
 * @stack: the stack list
 * @line_number: the line number
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	int iscii;

	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	iscii = is_ascii((*stack)->n);

	if (iscii == 0)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (*stack)->n);

}


/**
 * is_ascii - Checks if the int has a char value
 * @num: the integer
 * Return: 1 on success, 0 on fail
 */

int is_ascii(int num)
{
	if (num >= 0 && num <= 127)
		return (1);
	return (0);
}
