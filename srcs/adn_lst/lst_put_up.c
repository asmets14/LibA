
#include <lst.h>

void lst_put_up(t_lst *list, t_elem *elem)
{
	t_elem *tmp;

	tmp = list->head;
	list->head = elem;
	lst_fusion(list->head, tmp);
}