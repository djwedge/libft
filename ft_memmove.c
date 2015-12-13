#include "libft.h"
#include <string.h>
#include <stdlib.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *s;
    char    *d;
    char    *tmp;
    
    s = (char *)src;
    d = (char *)dest;
    tmp = (char *)malloc(n);
    ft_memcpy(tmp, s, n);
    ft_memcpy(d, tmp, n);
    free(tmp);
    return (dest);
}