#include "monty.h"
/**
*printe - prints all values of stack
*@stack: struct
*@line_number: line number
*Return : 0
**/

void printe(stack_t **stack, unsigned int line_number)
{
	stack_t *x;
	
	x = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout,"%d\n", x->n);
}
