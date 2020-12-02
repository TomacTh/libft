#include "./includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *pdest;

	pdest = dest;
	if (!dest && !src)
		return (0);
	while (n-- > 0)
	{
		*pdest = *(unsigned char *)src;
		src++;
		pdest++;
	}
	return (dest);
}
