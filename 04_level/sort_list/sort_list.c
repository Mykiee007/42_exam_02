#include "list.h"

//2:17pm ~ 3:07

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *cur;
	int swap = 1;
	int *tmp;

	if(!lst)
		return 0;

	while(swap)
	{
		cur = lst;
		swap = 0;
		while(cur -> next)
		{
			if(!cmp(cur->data,cur->next->data))
			{
				tmp = cur->data;
				cur->data = cur->next->data;
				cur->next->data = tmp;
				swap = 1;
			}
			cur = cur -> next;
		}
	}
	return (lst);
}