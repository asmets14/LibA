#ifndef LIBA_H
# define LIBA_H

typedef struct s_elem
{
	void	*data;
	struct s_elem	*prev;
	struct s_elem	*next;
}			t_elem;

typedef struct s_lst
{
	t_elem *head;

}				t_lst;

void adn_lst_fusion(t_elem *elem1, t_elem *elem2);
void adn_lst_put_end(t_lst *list, t_elem *elem);
void adn_lst_put_up(t_lst *list, t_elem *elem);

t_lst *adn_lst_newlist(void);
t_elem *adn_lst_newelem(void *data);

# endif