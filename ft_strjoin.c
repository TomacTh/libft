#include "./includes/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	char *begin;

	if(!s1 || !s2)
		return (0);
	if(!(str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	begin = str;
	while(*(char *)s1)
	{
		*str = *(char *)s1;
		s1++;
		str++;
	}
	while(*(char *)s2)
	{
		*str = *(char *)s2;
		s2++;
		str++;
	}
	*str = '\0';
	return (begin);
}
