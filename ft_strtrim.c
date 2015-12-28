#include "libft.h"

static size_t   is_space(char c)
{
    return (c == '\n' || c == ' ' || c == '\t');
}

static size_t   find_start(char const *s)
{
    size_t i;
    
    i = 0;
    while (is_space(s[i]))
        i++;
    return (i);
}

static size_t	find_end(char const *s)
{
    size_t len = ft_strlen(s);
	if (len)
	{
		len--;
		while (is_space(s[len]))
			len--;
	}
	return (len);
}

char            *ft_strtrim(char const *s)
{
    size_t  start;
    size_t  end;
    
    start = find_start(s);
    end = find_end(s);
    if (!end && !start)
        return (ft_strdup(s));
    if (start == ft_strlen(s))
        return (ft_strsub(s, 0, 0));
    else
        return (ft_strsub(s, start, end - start + 1));
    return (NULL);
}