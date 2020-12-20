#include "./includes/libft.h"


static int	is_in_set(char c,const char *set)
{
	while(*set)
	{	
		if(c == *set)
			return (1);
		set++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{   
    char *copy;
    char *str;
    int i;
    int y;

    if(!set || !s1)
        return (0);
    i = 0;	
    copy = (char*)s1;
    while(copy[i] && is_in_set(copy[i], set))
    	i++;
    y = ft_strlen(s1) - 1;
    while(y > i && is_in_set(copy[y], set))
        y--;
    if(!(str = malloc(y - i + 2)))
        return (0);
    while(i <= y)
    {    
        *str = ((char *)s1)[i];
		str++;
        i++; 
    }
    *str = '\0';
    return (copy);
}
