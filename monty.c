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

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: %s file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	fs = fopen(argv[1], "r");
	if (fs == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}

	return (0);
}
