#include "./includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*(char*)s && *(char*)s != c)
		s++;
	if (*(char*)s == c)
		return (char*)(s);
	return (0);
}
