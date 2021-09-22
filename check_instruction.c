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
		{"pall", execute_pall},
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
	{
		free(*line);
		fclose(*monty_file);
		free_stack_t(*stack);
		print_error_3(line_number, token);
	}
}
