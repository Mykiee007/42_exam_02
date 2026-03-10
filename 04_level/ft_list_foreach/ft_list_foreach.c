#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *cur;
	
	cur = begin_list;
	while(cur)
	{
		f(cur->data);
		cur = cur -> next;
	}
}



/*#include "ft_list.h"

// easiest of all 
void	ft_list_foreach(t_list *begin_list, void (*f)(void *)) {
	t_list	*current;

	current = begin_list;
	while (current) {
		f(current->data);
		current = current->next;
	}
}
*/