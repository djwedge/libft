#include "libft.h"

char    *ft_strstr(const char *str, const char *to_find)
{
    int i;
    
    i = 0;
    if (to_find[0] == '\0')
        return ((char*)str);
    while (str[i] != '\0' && str[i] != to_find[0])
        i++;
    if (ft_strcmp((char *)(str + i), to_find) == 0)
        return ((char *)(str + i));
    return (NULL);
}