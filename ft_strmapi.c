#include "./includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{	
	char *str;
	unsigned int i;
	
	if(!s)
		return (0);
	if(!(str = malloc(ft_strlen((char *)s) + 1)))
		return (0);
	i = 0;
	while(((char *)s)[i])
	{
		str[i] = f(i, ((char *)s)[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
