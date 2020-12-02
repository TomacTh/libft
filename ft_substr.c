#include "./includes/libft.h"

char *ft_substr(char const *s, unsigned int start,	size_t len)
{
	char *str;
	unsigned int i;

	if(!(str = malloc(len + 1)) || !s)
		return (0);
	i = 0;
	while(((char *)s)[start+i] && i < len && start < ft_strlen(s))
	{	
		str[i] = ((char *)s)[start+i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
