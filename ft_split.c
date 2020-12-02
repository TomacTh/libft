#include "./includes/libft.h"

static int compare(char a, char b)
{
	if(a == b)
		return (1);
	return (0);
}

static unsigned int	count_words(char *s, char c)
{
	unsigned int count;

	count = 0;
	while(*s)
	{	
		if(!compare(*(char *)s, c))
		{
			count++;
			while(*(char *)s && !compare(*s, c))
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
	unsigned int count;
	unsigned int i;
	char *begin;
	char **strs;
	
	if(!s)
		return (0);
	count = count_words((char*)s, c);
	if(!(strs = malloc(sizeof(char* ) * (count + 1))))
		return (0);
	i = 0;
	while(i < count)
	{
		while(*(char *)s)
		{	
			if(!compare(*(char *)s, c))
			{
				begin = (char *)s;
				while(*(char *)s && !compare(*(char *)s, c))
					s++;
				if(!(strs[i] = malloc(s - begin + 1)))
					return (0);
				fill_malloc(strs[i], begin, (char*)s);
				i++;
			}
			else
				s++;
		}
	}
	strs[i] = 0;
	return (strs);
}
