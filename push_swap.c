#include <stdio.h>
#include "libft/libft.h"
/* initialize stack a */
int	*init_and_write_stack_a(int argc, char **argv)
{
	int	*stack_a;
	int	i;

	i = 1;
	stack_a = ft_calloc((argc - 1), sizeof(int));
	while (i < argc)
	{
		stack_a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	return (stack_a);
}

int *push_swap(int argc, char **argv)
{
	int *stack_a;

	stack_a = init_and_write_stack_a(argc,argv);
	return(stack_a);
}
int main(int argc, char **argv)
{
	int	i;
	i = 0;
	while (i < argc-1)
	{
		printf("%d ",(push_swap(argc,argv))[i]);
		i++;
	}
}
