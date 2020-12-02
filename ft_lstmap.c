#include "./includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;
	t_list *newel;

	if(!lst || !f)
		return (0);
	if(!(newel = ft_lstnew((*f)(lst->content))))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	newlst = newel;
	lst = lst->next;
	while(lst)
	{	
		if(!(newel = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&newlst, newel);
	}
	return (newlst);
}
