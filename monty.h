#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*#include <unistd.h>*/
/*#include <sys/types.h>*/
/*#include <sys/stat.h>*/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*These functions are in the create__stack_t.c file*/
size_t print_stack_t(const stack_t *h);
stack_t *push_node(stack_t **head, const int n);
stack_t *enqueue_node(stack_t **head, const int n);

/*These functions are in the print_error_message.c file*/
void print_error_1(void);
void print_error_2(char *file_name);
void print_error_3(unsigned int line_number, char *opcode);

/*These functions are in the print_instruction_error_message.c file*/
void print_push_error(unsigned int line_number);

/*This function is in the check_instruction.c file*/
void check_instruction(stack_t **stack, unsigned int line_number, char *token);

/*These function are in the instruction_functions.c file*/
void execute_push(stack_t **stack, unsigned int line_number);
void print_stack(stack_t **stack, unsigned int line_number);

/*These functions are in exit_functions.c*/
void close_file(int status, void *arg);

#endif /* MONTY_H */
