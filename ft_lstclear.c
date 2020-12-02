#include "./includes/libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{	
	t_list *tmp;
	
	if(lst)
	{	
		while(*lst)
		{
			tmp = *lst;
			*lst = tmp->next;
			ft_lstdelone(tmp, del);
		}
		*lst = 0;
	}
}
