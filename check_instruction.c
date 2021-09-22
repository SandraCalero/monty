#include "monty.h"

/**
 * check_instruction - Gests the corresponding function acording to an
 * instruction
 * @stack: Pointer to the head of a stack
 * @line_number: Number of line inside of the file
 * @token: Instruction to check
 * @line: Pointer to a line in a file
 * @monty_file: Pointer to a file to be readed.
 */

void check_instruction(stack_t **stack, unsigned int line_number, char *token,
		       char **line, FILE **monty_file)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", execute_push},
		{"pall", print_stack},
		{"pint", execute_pint},
		{"pop", execute_pop},
		{"swap", execute_swap},
		{"add", execute_add},
		{"nop", execute_nop},
		{NULL, NULL}};

	while (instructions[i].opcode != NULL)
	{
		if (strcmp(instructions[i].opcode, token) == 0)
			break;
		i++;
	}
	if (instructions[i].opcode != NULL)
	{
		instructions[i].f(stack, line_number, line, monty_file);
		return;
	}
	else
		invalid_instruction(stack, line_number, token, line,
				    monty_file);
}

/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Head node of the list
 * @index: Index to return
 * Return: Node indexed
 */
stack_t *get_dnodeint_at_index(stack_t *head, unsigned int index)
{
	size_t i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a stack_t linked list.
 * @head: Head node
 * @index: Index of the node to delete
 * Return: 1 if can delete otherwise 0
 */
int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	stack_t *node_find = NULL;

	node_find = get_dnodeint_at_index(*head, index);
	if (node_find == NULL)
		return (-1);
	if (index == 0 && node_find->next == NULL)
	{
		free(node_find);
		*head = NULL;
		return (1);
	}
	if (index == 0 && node_find->next != NULL)
	{
		node_find->next->prev = NULL;
		*head = node_find->next;
		free(node_find);
		return (1);
	}
	if (node_find->next == NULL)
	{
		node_find->prev->next = NULL;
		free(node_find);
		return (1);
	}
	node_find->prev->next = node_find->next;
	node_find->next->prev = node_find->prev;
	free(node_find);
	return (1);
}
