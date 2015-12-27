#include "libft.h"
#include <string.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    if (n)
    {
        while (*s1 == *s2 && n-- > 0)
        {
            if (*s1 == '\0' || n == 0)
                return (0);
            s1++;
            s2++;
        }
        if (*(unsigned char *)s1 > *(unsigned char *)s2)
                return (1);
            else
                return (-1);
    }
    return (0);
}