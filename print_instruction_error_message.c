#include "monty.h"
/**
 * print_push_error - Prints an error message when an integer is not
 * given as an agument to the push instruction.
 * @line_number: Number of the line where the error happens
 *
 * Return: Nothing
 */
void print_push_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}