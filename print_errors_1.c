#include "monty.h"

/**
 * print_error_1 - Print error when is not get one argument
 * @msg: Char to print
 * Return: Nothing
 */
void print_error_1(char *msg)
{
	fprintf(stderr, "USAGE: %s file\n", msg);
	exit(EXIT_FAILURE);
}
/**
 * print_error_2 - Print error when file can't be opened
 * @msg: Char to print
 * Return: Nothing
 */
void print_error_2(char *msg)
{
	fprintf(stderr, "Error: Can't open file %s\n", msg);
	exit(EXIT_FAILURE);
}
