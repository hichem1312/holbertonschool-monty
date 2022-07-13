#include "monty.h"
char *stoke_1(char *c)
{
	int i = 0, search = 0;
	while (c)
	{
		if (c[i] == '#')
			return ("#");
		if (!((c[i] >= 97) && (c[i] <= 122)))
		{
			if (search == 1)
			{
				c[i] = '\0';
				return(c);
			}
			else
			c++;
		}
		else
		{
			i++;
			search = 1;
		}
	}
	return(c);
}
int stoke_2(char *c)
{
	size_t i = 0, j = 0;
	int search = 0;
	char ch[48];

	while (i < strlen(c))
	{
		if (((c[i] >= 48) && (c[i] <= 57)))
		{
			search = 1;
			ch[j] = c[i];
			j++;
		}
		i++;
	}
	if (search == 1)
		return(atoi(ch));
	return(6666);
}
