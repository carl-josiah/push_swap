#include <stdlib.h>
#include <stdio.h>

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}

static int	word_count(char *str)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str && ft_isspace(*str))
		str++;
	while (*str)
	{
		if (ft_isspace(*str))
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

// char	**ft_split(char *str, char c)
// {
// 	// count the words
// 	// free the pointer that points to string
// }

int	main(void)
{
	printf("%d\n", word_count("        ada         da   sup sup   a dad2 3 "));
}