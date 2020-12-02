#include "./includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *end;

	if(alst)
	{
		if(!*alst)
			*alst = new;
		else
		{
			end = ft_lstlast(*alst);
			end->next = new;
		}
	}
}
