#include "monty.h"
/**
 * execute_add - Add the 2 first (top) elements of the stack
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void execute_add(stack_t **stack, unsigned int line_number, char **line,
				 FILE **monty_file)
{
	int n = 0;

	if (list_len(*stack) < 2)
	{
		free(*line);
		free_stack_t(*stack);

		fclose(*monty_file);
		dprintf(STDOUT_FILENO, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	pop_node(stack);
	(*stack)->n += n;

}

/**
 * execute_nop - Do nothing
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void execute_nop(stack_t **stack, unsigned int line_number, char **line,
				 FILE **monty_file)
{
	(void)stack;
	(void)line_number;
	(void)line;
	(void)monty_file;
	return;
}
