#include "./includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t y;
	
	while(!*little)
		return ((char*)big);
	i = 0;
	while(big[i] && len-- > 0)
	{	
		y = 0;
		while(big[i+y] == little[y] && y <= len)
		{	
			if(little[y+1] == '\0')
				return ((char*)&big[i]);
			y++;
		}
		i++;
	}
	return (0);
}
