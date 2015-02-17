#include <lst.h>
#include <stdlib.h>
/*
**creation new element pour liste chainee
*/

t_elem *lst_newelem(void *data)
{
	t_elem *elem;

	elem = (t_elem *)malloc(sizeof(t_elem));
	
	elem->data = data;
	elem->next = NULL;
	elem->prev = NULL;

	return (elem);
}


