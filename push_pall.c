#include "monty.h"
/**
* push_pall -Insertion of a new node
* @top:prints the values from the top of the top
* @line_num: lines of number
* Return: 0
*/
void push_pall(stack_t **top, unsigned int line_num)
{
	stack_t *new_stack;

	new = malloc(sizeof(stack_t));
	if (!new_stack)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_z(*top);
		exit(EXIT_FAILURE);
	}
	if (new_stack == NULL)
		exit(EXIT_FAILURE);
	new_stack->n = line_num;
	new_stack->prev = NULL;
	new_stack->next = *top;

	if (*top != NULL)
	{
	(*top)->prev = new_stack;
	}
	*top = new;
}
