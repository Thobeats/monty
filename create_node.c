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

	if (newNode != NULL)
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
		newNode->next = NULL;
		newNode->prev = *stack;
		(*stack)->next = newNode;
	}

	return (newNode);
}
