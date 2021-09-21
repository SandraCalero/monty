#include "monty.h"

/**
 * check_instruction - Gests the corresponding function acording to an
 * instruction
 * @stack: Pointer to the head of a stack
 * @line_number: Number of line inside of the file
 * @token: Instruction to check
 */

void check_instruction(stack_t **stack, unsigned int line_number, char *token)
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