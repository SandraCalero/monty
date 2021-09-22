#include "monty.h"

/**
* free_stack_t - frees a stack_t list
* @head: Pointer to the head to a double linked list
*
* Return: Nothing
*/
void free_stack_t(stack_t *head)
{
	stack_t *aux = head;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}

/**
 * invalid_instruction - Free line and stack, close the file and print error
 * when an invalid instriction is given
 * @stack: Pointer to the head of a double linked list to be freed
 * @line_number: The number of the line where is the invalid instruction
 * @line: Pointer to a line to be freed
 * @token: The name of the invalid instruction
 * @monty_file: File to be closed
 *
 * Return: Nothing
 */
void invalid_instruction(stack_t **stack, unsigned int line_number,
			 char *token, char **line, FILE **monty_file)
{
		print_error_3(line_number, token);
		free(*line);
		fclose(*monty_file);
		free_stack_t(*stack);

		exit(EXIT_FAILURE);
}
