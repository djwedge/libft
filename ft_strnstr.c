#include "libft.h"

char    *ft_strnstr(const char *str, const char *to_find, size_t n)
{
    size_t i;
    size_t j;
    size_t k;
    
    i = 0;
    if (to_find[0] == '\0')
        return ((char*)str);
    while (i < n && str[i] != '\0')
    {
        j = i;
        k = 0;
        while (j < n && str[j] == to_find[k])
        {
            j++;
            k++;
            if (to_find[k] == '\0')
                return ((char *)(str + i));
        }
        i++;
    }
    return (NULL);
}