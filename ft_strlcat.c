#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

    i = 0;
    while (dst[i] && i < size)
		i++;
	dst_len = i;
	while (i < size - 1 && src[i - dst_len])
	{
		dst[i] = src[i - dst_len];
		i++;
	}
    if (dst_len < size)
        dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}
