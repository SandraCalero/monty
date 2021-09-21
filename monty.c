#include "monty.h"

/**
 * main - Main function to execute monty
 * @argc: Number of arguments supplied to the program including ./monty string
 * @argv: Arguments to be processed into the executable ./monty
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	FILE *monty_file = NULL;
	char *line = NULL;
	size_t line_length = strlen(line);

	if (argc != 2)
		print_error_1();
	monty_file = fopen(argv[1], "r");
	if (monty_file == NULL)
		print_error_2(argv[1]);
	while (getline(&line, &line_length, monty_file) != -1)
		printf("%s", line);

	return (0);
}
