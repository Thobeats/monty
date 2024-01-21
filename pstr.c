#include "monty.h"

/**
 * pstr - Prints out the string starting at the top in a stack
 * @stack: the stack list
 * @line_number: the line number
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	int iscii;
	stack_t *i;

	(void)line_number;
	if ((*stack) == NULL)
	{
		printf("\n");
	}
	else
	{
		i = (*stack);
		while (i != NULL && i->n != 0)
		{
			iscii = is_ascii(i->n);

			if (iscii != 0)
				printf("%c", i->n);
			else
				break;
			if (i->next == NULL)
				i = NULL;
			else
				i = i->next;
		}
		printf("\n");

	}
}
