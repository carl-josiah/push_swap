#include "push_swap.h"
#include "test.h"

int	main(int ac, char **av)
{
	char	*str;

	str = clean_joined_str(av[1]);
	(void) ac;
	// printf("%i\n", count_arg_len(av + 1) + (ac - 1));
	printf("%s\n", str);
	free(str);
	return (0);
}
