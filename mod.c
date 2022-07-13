#include "monty.h"
/**
*mod -  computes the rest of the division of the second top element of the stack by the top element of the stack
*@stack: struct
*@line_number: line number
*Return : 0
**/
void mod(stack_t **stack, unsigned int line_number)
{
    int x = 0;
	stack_t *ext = NULL;

	if (!((*stack) && (*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		free_z(*stack);
		exit(EXIT_FAILURE);
	}
    ext = (*stack)->next;
    if ((ext->n == 0) || ((*stack)->n == 0))
    { 
        fprintf(stderr, "L%d: division by zero\n", line_number);
		free_z(*stack);
		exit(EXIT_FAILURE);
    }
    x = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, line_number);
	(*stack)->n = x;
}
