#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *dest;
    int     i;
    
    dest = (char *)malloc(sizeof(dest) * ft_strlen(s));
    if (dest == 0)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        dest[i] = f(i, s[i]);
        i++;
    }
    return (dest);
}