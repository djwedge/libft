#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *dest;
    
    dest = (char *)malloc(sizeof(dest) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (dest == 0)
        return (NULL);
    ft_strcpy(dest, s1);
    ft_strcpy(dest + ft_strlen(s1), s2);
    
    return (dest);
}