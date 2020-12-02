#include "./includes/libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	size_t dstlen;
	size_t srclen;
	size_t i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if(dstsize <= dstlen)
		return (dstsize + srclen);
	i = 0;
	while(src[i] && (dstlen + i) < dstsize - 1)
	{
		dst[dstlen+i] = src[i];
		i++;
	}
	dst[dstlen+i] = '\0';
	return (srclen + dstlen);
}
