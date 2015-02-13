#include <liba.h>
#include <stdlib.h>

t_lst *lst_newlist(void)
{
	t_lst *list;

	list = (t_lst *)malloc(sizeof(t_lst));
	list->head = NULL;

	return (list);
}