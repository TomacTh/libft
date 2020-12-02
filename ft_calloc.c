#include "./includes/libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{	
	size_t i;
	void *ptr;

	ptr = (malloc(sizeof(void) * (size * nmemb)));
	if(!ptr)
		return (0);
	i = 0;
	while(i < (size*nmemb))
	{
		((char*)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
