#include <lst.h>

void lst_fusion(t_elem *elem1, t_elem *elem2)
{
	if(elem2)
		elem2->prev = elem1;
	if(elem1)
		elem1->next = elem2;
}