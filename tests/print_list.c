// not for submission

#include "../inc.h"
#include "test.h"

void	print_list(t_list *head)
{
	t_list	*curr;

	curr = head;
	while (curr)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}
