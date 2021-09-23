#include "monty.h"

/**
 * execute_mod - computes the rest of the division of the second top element
 * of the stack by the top element of the stack.
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void execute_mod(stack_t **stack, unsigned int line_number, char **line,
		 FILE **monty_file)
{
	(void)stack;
	(void)line_number;
	(void)line;
	(void)monty_file;
}

/**
 * execute_pchar -  prints the char at the top of the stack, followed by a
 * new line.
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void execute_pchar(stack_t **stack, unsigned int line_number, char **line,
		   FILE **monty_file)
{
	int character;

	if (list_len(*stack) <= 0)
	{
		free(*line);
		free_stack_t(*stack);

		fclose(*monty_file);
		fprintf(stderr,
			"L%u: can't pchar, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	character = (*stack)->n;
	if (!isascii(character))
	{
		free(*line);
		free_stack_t(*stack);

		fclose(*monty_file);
		fprintf(stderr,
			"L%u: can't pchar, value out of range\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", character);
}
/**
 * execute_pstr -  prints the char at the top of the stack, followed by
 * a new line.
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void execute_pstr(stack_t **stack, unsigned int line_number, char **line,
		  FILE **monty_file)
{
	int character = 0;
	stack_t *copy = *stack;
	int i = 0;
	(void)stack;
	(void)line_number;
	(void)line;
	(void)monty_file;

	while (copy != NULL)
	{
		character = (copy)->n;
		if (isascii(character) == 0 || character == 0)
			break;
		putchar(character);
		copy = (copy)->next;
		if ((int)list_len(*stack) == i)
			break;
		i++;
	}
	putchar('\n');
	putchar('\0');
}
/**
 * execute_rotl -  rotates the stack to the top.
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void execute_rotl(stack_t **stack, unsigned int line_number, char **line,
		  FILE **monty_file)
{
	(void)stack;
	(void)line_number;
	(void)line;
	(void)monty_file;
}
/**
 * execute_rotr -  rotates the stack to the bottom.
 * @stack: Stack to work with
 * @line_number: The number of line inside of the file
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 *
 * Return: Nothing
 */
void execute_rotr(stack_t **stack, unsigned int line_number, char **line,
		  FILE **monty_file)
{
	(void)stack;
	(void)line_number;
	(void)line;
	(void)monty_file;
}
