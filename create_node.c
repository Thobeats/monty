#include "monty.h"

/**
 * create_node - creates and adds a new node to a linked list
 * @stack: The stack
 * @n: The integer value
 * Return: the new added value
 */


stack_t *create_node(stack_t **stack, const int n)
{
	stack_t *newNode = malloc(sizeof(stack_t));
	stack_t *i;

	if (newNode == NULL)
	{
		fprintf(stderr, "Malloc failed");
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	if (*stack == NULL)
	{
		newNode->next = NULL;
		*stack = newNode;
	}
	else
	{
		i = *stack;
		while (i->next != NULL)
			i = i->next;

		newNode->next = NULL;
		newNode->prev = i;
		i->next = newNode;
	}
	return (newNode);
}
