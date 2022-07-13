#include "monty.h"
/**
*swap - swaps the top two elements of the stack.
*@stack: struct
*@line_number: line number
*Return : 0
**/
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *ext = NULL;
    int x = 0, j = 0;

	if (!((*stack) && (*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
    ext = *stack;
    x = ext->n;
    ext = ext->next;
    j = ext->n;
    (*stack)->n = j;
    *stack = (*stack)->next;
    (*stack)->n = x;
    *stack = (*stack)->prev;

}
