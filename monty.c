#include "monty.h"

/**
 * main - Main function to execute monty
 * @argc: Number of arguments supplied to the program including ./monty string
 * @argv: Arguments to be processed into the executable ./monty
 *
 * Return: If success EXIT_SUCCESS and if error EXIT_FAILURE.
 */
int main(int argc, char **argv)
{
	FILE *monty_file = NULL;
	char *line = NULL, *token = NULL;
	size_t line_length = 0;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
		print_error_1();
	monty_file = fopen(argv[1], "r");
	if (monty_file == NULL)
		print_error_2(argv[1]);
	on_exit(free_line, &line);
	on_exit(close_file, monty_file);
	while (getline(&line, &line_length, monty_file) != -1)
	{
		line_number++;
		token = strtok(line, " \n\t\r");
		if (token != NULL)
			check_instruction(&stack, line_number, token);
	}
	exit(EXIT_SUCCESS);
}
