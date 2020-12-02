#include "./includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	if(!(new = malloc(sizeof(t_list) * 1)))
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}