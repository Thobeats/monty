#include "monty.h"

/**
 * check_number - confirm if integer
 * @str: the array of characters
 *
 * Return: 1 if it is an integer, 0 if it is not
 */

int check_number(char *str)
{
	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		if (*str != '-' && isdigit(*str) == 0)
		{
			printf("%c\n", *str);
			return (0);
		}
		str++;
	}

	return (1);
}
