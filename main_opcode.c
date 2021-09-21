#include "monty.h"

/**
 * opcode - Implement the selection of a function
 * dependinding iof the opcode get
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @token: opcode to check
 */

void opcode(stack_t **stack, unsigned int line_number, char *token)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", execute_push},
		{"pall", print_stack},
		{NULL, NULL}};
	while (instructions[i].opcode != NULL)
	{
		if (strcmp(instructions[i].opcode, token) == 0)
			break;
		i++;
	}
	if (instructions[i].opcode != NULL)
		instructions[i].f(stack, line_number);
}

/**
 * execute_push - Add a new node at the head of the stack
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
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
