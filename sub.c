#include "monty.h"
/**
*sub - subtracts the top element of the stack from the second top element of the stack.
*@stack: struct
*@line_number: line number
*Return : 0
**/
void sub(stack_t **stack, unsigned int line_number)
{
    int x = 0;

	if (!((*stack) && (*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		free_z(*stack);
		exit(EXIT_FAILURE);
	}
    x += ((*stack)->next->n) - ((*stack)->n);
	pop(stack, line_number);
	(*stack)->n = x;
}
