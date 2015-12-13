#include "libft.h"
#include <string.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *ptr1;
    char *ptr2;
    
    ptr1 = (char *)s1;
    ptr2 = (char *)s2;
    return (ft_strncmp(ptr1, ptr2, n));
}