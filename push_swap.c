#include <stdio.h>
#include "libft/libft.h"
/* initialize stacks */
char *init_and_write_stack_a(int argc, char **argv)
{
	char *stack_a;
	int	i;

	i = 1;
	stack_a = malloc(sizeof(int) * argc);
	while (i < argc)
	{
		stack_a[0] = ft_atoi(argv[i]);
		i++;
	}
	return (stack_a);
}
char *init_stack_b(int argc)
{
	char *stack_b;

	stack_b = malloc(sizeof(int) * argc);
	return (stack_b);
}
char *push_swap(int argc, char **argv)
{
	char *stack_a;
	// char *stack_b;

	stack_a = init_and_write_stack_a(argc,argv);
	return(stack_a);
}
int main(int argc, char **argv)
{
	printf("%s",push_swap(argc,argv));
}
/* dopice nejde to nepise to do array */
