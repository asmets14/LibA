#include <lst.h>
#include <moulitest.h>

#include <stdio.h>

static void test00(t_test *test)
{
	t_lst *list;
	t_elem *elem1;
	t_elem *elem2;

	list = lst_newlist();
	elem1 = lst_newelem("bonbon");
	elem2 = lst_newelem("susucre");
	lst_put_end(list, elem1);
	lst_put_end(list, elem2);

	mt_assert(strcmp(list->head->data, "bonbon") == 0);
	mt_assert(strcmp(list->head->next->data, "susucre") == 0);

}

static void test01(t_test *test)
{
	t_elem *elem2;
	t_elem *elem1;
	t_elem *elem3;
	t_lst *list;

	list = lst_newlist();
	elem1 = lst_newelem("bonbon");
	elem2 = lst_newelem("susucre");
	elem3 = lst_newelem("sucette");
	
	lst_put_end(list, elem1);
	lst_put_end(list, elem2);
	lst_put_end(list, elem3);
	

	mt_assert(strcmp(list->head->next->next->data, "sucette") == 0);

}



void	suite_lst_put_end(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test00);
	SUITE_ADD_TEST(suite, test01);

}