#include <liba.h>
#include <stdio.h>

void lst_put_end(t_lst *list, t_elem *elem)
{
	t_elem *tmp;

	if (!list->head)
	{	
		list->head = elem;
	}
	else
	{
		tmp = list->head;
		while(tmp->next)
			tmp = tmp->next;
		lst_fusion(tmp, elem);
	}
}