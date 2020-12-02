#include <stdlib.h>

char	*ft_strdup(char *s)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i])
		i++;
	if (!(str = malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
