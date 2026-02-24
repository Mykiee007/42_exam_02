#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int i = 0;
	t_list *cur;

	cur = begin_list;
	while(cur -> next)
	{
		i++;
		cur = cur -> next;
	} 
	return i;
}