#ifndef _MONTY_H
#define _MONTY_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <ctype.h>

#define LIMITER " \n"


/* Structures Doubly linked lists */


typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Prototypes basic operations */

void pall(stack_t **head, unsigned int counter);
void push(stack_t **head, unsigned int counter);
void pint(stack_t **head, unsigned int counter);
void swap(stack_t **head, unsigned int counter);
void pop(stack_t **head, unsigned int counter);
void nop(stack_t **head, unsigned int counter);
void add(stack_t **head, unsigned int counter);
void sub(stack_t **head, unsigned int counter);
void mul(stack_t **head, unsigned int counter);
void _div(stack_t **head, unsigned int counter);

/* Selector structure */
void select_func(stack_t **head, char *token, unsigned int counter);

/* Free memory */
void free_all(stack_t **head);

#endif
