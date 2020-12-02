#include "./includes/libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list *tmp;

	if(alst)
	{
		tmp = *alst;
		new->next = tmp;
		*alst = new;
	}
}
