#include "./includes/libft.h"

static unsigned int	count_words(char *s, char c)
{
	unsigned int count;

	count = 0;
	while(*s)
	{	
		if((*(char *)s != c))
		{
			count++;
			while(*(char *)s && *(char *)s != c)
				s++;
		}
		else
			s++;
	}
	return count;
}

static void	fill_malloc(char *str, char *begin, char *end)
{
	while(begin < end)
	{
		*str = *begin;
		begin++;
		str++;
	}
	*str = '\0';
}

char	**ft_split(char const *s, char c)
{
	unsigned int i;
	char *begin;
	char **strs;

	if(!s || !(strs = malloc(sizeof(char* ) * (count_words((char*)s, c) + 1))))
		return (0);
	i = 0;
	while(*(char *)s)
	{	
		if((*(char *)s != c))
		{
			begin = (char *)s;
			while(*(char *)s && (*(char *)s != c))
				s++;
			if(!(strs[i] = malloc(s - begin + 1)))
				return (0);
			fill_malloc(strs[i], begin, (char*)s);
			i++;
		}
		else
			s++;
	}
	strs[i] = 0;
	return (strs);
}
