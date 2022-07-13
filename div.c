#include "monty.h"
/**
*div -  divides the second top element of the stack by the top element of stack
*@stack: struct
*@line_number: line number
*Return : 0
**/
void dive(stack_t **stack, unsigned int line_number)
{
    int x = 0;

	if (!((*stack) && (*stack)->next))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		free_z(*stack);
		exit(EXIT_FAILURE);
	}
    if (((*stack)->n == 0))
    { 
        fprintf(stderr, "L%d: division by zero\n", line_number);
		free_z(*stack);
		exit(EXIT_FAILURE);
    }
    x = ((*stack)->next->n) / ((*stack)->n);
	pop(stack, line_number);
	(*stack)->n = x;
}
