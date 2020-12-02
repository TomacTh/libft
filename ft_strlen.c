#include <unistd.h>

int 	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while(*str)
	{	
		i++;
		str++;
	}
	return i;
}
