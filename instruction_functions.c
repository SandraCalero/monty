#include "monty.h"

/**
 * execute_push - Add a new node at the head of the stack
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 *
 * Return: Nothing
 */

void execute_push(stack_t **stack, unsigned int line_number)
{
	char *second_argument;
	int i, number = 0;

	second_argument = strtok(NULL, "\n\t\r "); /* pend. check error*/
	if (second_argument == NULL)
		print_push_error(line_number);
	for (i = 0 ; second_argument[i] != '\0' ; i++)
	{
		if (isdigit(second_argument[i]) == 0)
		{
			if (second_argument[i] == '-')
			continue;
			print_push_error(line_number);
			break;
		}
	}
	number = atoi(second_argument);
	push_node(stack, number);
}

/**
 * print_stack - Print the stack
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 *
 * Return: Nothing
 */

void print_stack(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	(void)line_number;
	print_stack_t(*stack);
}
