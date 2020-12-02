#include "./includes/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{	
	if(lst)
	{	
		if(del && *del)
			(*del)(lst->content);
		free(lst);
	}
}
