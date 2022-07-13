#include "monty.h"
/**
*pall - prints all values on the stack from the top
*@stack: a pointer
*@line_number: line number
*Return : 0
**/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *x = NULL;

	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (*stack)
	{
		x = (*stack)->next;
		free(*stack);
		*stack = x;
	}
}
