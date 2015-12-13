#include "libft.h"
#include <string.h>

char    *ft_strnstr(const char *str, const char *to_find, size_t n)
{
    size_t i;
    
    i = 0;
    if (to_find[0] == '\0')
        return ((char*)str);
    while (i < n && str[i] != '\0' && str[i] != to_find[0])
        i++;
    if (ft_strcmp((char *)(str + i), to_find) == 0)
        return ((char *)(str + i));
    return (NULL);
}