#include "libft.h"
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *ptr;
    
    i = 0;
    ptr = (char *)s;
    while (i < n)
    {
        if (ptr[i] == c)
            return (ptr + i);
        i++;
    }
    return (NULL);
}