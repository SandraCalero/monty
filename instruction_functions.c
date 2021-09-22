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
	int number = 0;

	second_argument = strtok(NULL, "\n\t\r ");
	if (second_argument == NULL || check_if_is_digit(second_argument) == 0)
	{
		free(*line);
		free_stack_t(*stack);

		fclose(*monty_file);
		print_push_error(line_number);
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
	if (*stack == NULL)
	{
		free(*line);
		free_stack_t(*stack);

		fclose(*monty_file);
		exit(EXIT_FAILURE);
	}
	(void)line_number;
	print_stack_t(*stack);
}

/**
 * execute_pint - Print the head element into the stack
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void execute_pint(stack_t **stack, unsigned int line_number, char **line,
				  FILE **monty_file)
{

	if (list_len(*stack) == 0 || *stack == NULL)
	{
		free(*line);
		free_stack_t(*stack);

		fclose(*monty_file);
		print_pint_error(line_number);
	}
	printf("%i\n", (*stack)->n);
}

/**
 * execute_pop - Delete the first element in the stack
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void execute_pop(stack_t **stack, unsigned int line_number, char **line,
				 FILE **monty_file)
{
	if (list_len(*stack) == 0 || *stack == NULL)
	{
		free(*line);
		free_stack_t(*stack);

		fclose(*monty_file);
		print_pop_error(line_number);
	}
	delete_dnodeint_at_index(stack, 0);
	/*pop_node(stack);*/
}

/**
 * execute_swap - Change the 2 first (top) elements of the stack
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void execute_swap(stack_t **stack, unsigned int line_number, char **line,
				  FILE **monty_file)
{
	(void)stack;
	(void)line_number;
	(void)line;
	(void)monty_file;
}
