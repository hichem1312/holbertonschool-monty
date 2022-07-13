include "monty.h"
/**
*add - addition
*@stack: struct
*@line_number: line number
*Return : integer
**/
void add(stack_t **stack, unsigned int line_number)
{
    int x = 0;

	if (!((*stack) && (*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_z(*stack);
		exit(EXIT_FAILURE);
	}
    x += ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_number);
	(*stack)->n = x;
}
