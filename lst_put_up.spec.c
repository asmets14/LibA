
#include <liba.h>
#include <moulitest.h>


static void test00(t_test *test)
{
	t_lst *lst;
	t_elem *elem1;

	lst = lst_newlist();
	elem1 = lst_newelem("susucre");
	lst_put_up(lst, elem1);
	mt_assert(strcmp(lst->head->data, "susucre") == 0);

}

static void test01(t_test *test)
{
	t_lst *lst;
	t_elem *elem1;
	t_elem *elem2;

	lst = lst_newlist();
	elem1 = lst_newelem("susucre");
	elem2 = lst_newelem("parapluie");
	lst_put_up(lst, elem1);
	lst_put_up(lst, elem2);
	mt_assert(strcmp(lst->head->data, "parapluie") == 0);
}

void	suite_lst_put_up(t_suite *suite)
{
	SUITE_ADD_TEST(suite, test00);
	SUITE_ADD_TEST(suite, test01);
}