#include <liba.h>
#include <stdlib.h>

static int ft_strlen(char *s)
{
	int i;
	i = 0;
	while(s[i])
		i++;
	return(i);
}

static char *ft_strdup(char *str)
{
	char *name;
	int i;

	i = ft_strlen(str);
	name = (char *)malloc(sizeof(char)*(i + 1));
	i = 0;
	while(str[i])
	{
		name[i] = str[i];
		i++;
	}
	name[i] = '\0';
	return (name);

}

t_lst *tab_to_lst(char **tab)
{
	int i;
	t_lst *list;

	i = 0;
	list = lst_newlist();
	while(tab[i])
	{
		lst_put_end(list, lst_newelem(ft_strdup(tab[i])));
		i++;
	}
	return (list);
}
