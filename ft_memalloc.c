#include "libft.h"

void    *ft_memalloc(size_t size)
{
    char *dest;
    
    dest = (char *)malloc(sizeof(dest) * size);
    if (dest == 0)
        return (NULL);
    while (size-- > 0)
        dest[size] = 0;
    return (dest);
}