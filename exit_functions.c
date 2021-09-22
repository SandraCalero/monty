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
	fclose((FILE *) arg);
}
