#include <liba.h>
#include <stdlib.h>
/*
**creation new element pour liste chainee
*/

t_elem *lst_newelem(void *data)
{
	t_elem *list;

	list = (t_elem *)malloc(sizeof(t_elem));
	
	list->data = data;
	list->next = NULL;
	list->prev = NULL;

	return (list);
}

