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
	int number = 0;

	(void)line_number;
	second_argument = strtok(NULL, "\n\t\r "); /* pend. check error*/
	number = atoi(second_argument);
	push_node(stack, number);
}

/**
 * print_stack - Print the stack
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * Return: Nothing
 */

void print_stack(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	print_stack_t(*stack);
}
