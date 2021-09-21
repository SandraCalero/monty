#include "monty.h"

/**
 * main - Main function to execute monty
 * @argc: Number of elements including ./monty string
 * @argv: Arguments to be processed into the executable ./monty
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	FILE *fs = NULL;
	char *line = NULL;
	size_t line_length = 0;

	if (argc != 2)
		print_error_1(argv[0]);
	fs = fopen(argv[1], "r");
	if (fs == NULL)
		print_error_2(argv[1]);
	while (getline(&line, &line_length, fs) != -1)
		printf("%s", line);

	return (0);
}
