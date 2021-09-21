#ifndef MONTY_H
#define MONTY_H

#define  _GNU_SOURCE /* To compile and run getline*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


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

/*These functions are in the ....c file*/

/*These functions are in the print_errors_1.c file*/
void print_error_1(char *msg);
void print_error_2(char *msg);

/*These function are in the opcode.c file*/
void opcode(stack_t **stack,unsigned int line_number, char *token);
void execute_push(stack_t **stack,unsigned int line_number);
void print_stack(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
