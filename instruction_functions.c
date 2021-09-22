#include "monty.h"

/**
 * execute_push - Add a new node at the head of the stack
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void execute_push(stack_t **stack, unsigned int line_number, char **line,
		  FILE **monty_file)
{
	char *second_argument;
	int i, number = 0;

	second_argument = strtok(NULL, "\n\t\r ");
	if (second_argument == NULL)
	{
		free(*line);
		free_stack_t(*stack);

		fclose(*monty_file);
		print_push_error(line_number);
	}
	for (i = 0; second_argument[i] != '\0'; i++)
	{
		if (second_argument[i] == '-')
			continue;
		if (isdigit(second_argument[i]) == 0)
		{
			free(*line);
			free_stack_t(*stack);

			fclose(*monty_file);
			print_push_error(line_number);
			break;
		}
	}
	number = atoi(second_argument);
	if (push_node(stack, number) == NULL)
	{
		free(*line);
		free_stack_t(*stack);

		fclose(*monty_file);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * print_stack - Print the stack
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void print_stack(stack_t **stack, unsigned int line_number, char **line,
		 FILE **monty_file)
{
	if (stack == NULL)
	{
		free(*line);
		free_stack_t(*stack);

		fclose(*monty_file);
		exit(EXIT_FAILURE);
	}
	(void)line_number;
	print_stack_t(*stack);
}
