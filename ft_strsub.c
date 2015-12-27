#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char            *dest;
    unsigned int    i;
    
    dest = (char *)malloc(sizeof(dest) * len);
    if (dest == 0)
        return (NULL);
    i = 0;
    while (len-- > 0)
    {
        dest[i] = s[start];
        i++;
        start++;
    }
    dest[i] = '\0';    
    return (dest);
}