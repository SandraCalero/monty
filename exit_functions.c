#include "monty.h"

/**
 * close_file - close the open file
 * @status: unused variable status
 * @arg: Pointer to the opened file
 * Return: Nothing
 */
void close_file(int status, void *arg)
{
	(void)status;
	fclose((FILE *)arg);
}

/**
 * free_line - free the explored line
 * @status: unused variable status
 * @arg: Pointer to the line
 * Return: Nothing
 */
void free_line(int status, void *arg)
{
	char **line = arg;

	(void)status;
	if (line)
		free(*line);
}
