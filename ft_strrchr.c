#include "./includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = 0;
	while (*(char*)s)
	{
		if (*(char*)s == c)
			str = (char*)s;
		s++;
	}
	if (*(char*)s == c)
		return (char*)(s);
	if (str)
		return (str);
	return (0);
}
