#include "monty.h"
/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: int
**/
int main(int argc, char *argv[])
{
	FILE *fi;
	char *s = NULL;
	size_t line_buffer_size = 0;
	char *c = NULL;
	int n = 0, i = 0, j = 0, x = 1;
	stack_t *str = NULL;
	instruction_t st_fn[] = {{"push", push_pall},
							{"pall", pall},
							{"pint", printe},
							{"pop", pop},
							{"swap", swap},
							{"add", add},
							{"nop", nop},
							{"sub", sub},
							{"div", dive},
							{"mul", mul},
							{"mod", mod},
							{"#", ha},
							{"pchar", pchar},
							{NULL, NULL}};

	if (argc != 2) 
		{
			fprintf(stderr, "USAGE: monty file\n");
			exit(EXIT_FAILURE);
		}
	fi = fopen(argv[1], "r");
	if (!fi)
		{
			fprintf(stderr, "Error: can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
	while (!feof(fi))
	{
		x = 1;
		i = 0;
		while (x == 1)
		{
			x = getline(&s, &line_buffer_size, fi);
			j++;
		}
		if (x < 0)
			break;
		n = stoke_2(s);
		c = stoke_1(s);
		if (c)
		if ((n == 6666 && strcmp(c, st_fn[0].opcode) == 0))
		{
			fprintf(stderr, "L%i: usage: push integer\n", j);
			free_z(str);
			free(s);
			exit(EXIT_FAILURE);
		}
		while ((st_fn[i].opcode != NULL) && (strcmp(st_fn[i].opcode, c) != 0))
		{
			i++;
		}
		if (!(st_fn[i].opcode))
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", j, c);
			free_z(str);
			free(s);
			exit(EXIT_FAILURE);
		}
		if (i > 0)
			n = j;
		st_fn[i].f(&str, n);
	}
	free_z(str);
	free(s);
	fclose(fi);
	return (0);
}
