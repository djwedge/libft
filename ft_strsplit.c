#include "libft.h"

static size_t  count_words(char const *s, char c)
{
    size_t  nb_words;
    int     inside_word;
    
    nb_words = 0;
    inside_word = 0;
    while (*s)
    {
        if (!inside_word && *s != c)
        {
            inside_word = 1;
            nb_words++;
        }
        if (inside_word && *s == c)
            inside_word = 0;
        s++;
    }
    return (nb_words);
}

static size_t   wordlen(char const *s, char c)
{
    size_t len;
    
    len = 0;
    while (*s && *s != c)
    {
        len++;
        s++;
    }
    return (len);
}

char            **ft_strsplit(char const *s, char c)
{
    char    **tab;
    size_t  nb_words;
    int     i;
    
    nb_words = count_words(s, c);
    tab = (char **)malloc(sizeof(tab) * (nb_words + 1));
    if (tab == 0)
        return (NULL);
    i = 0;
    while (nb_words--)
    {
        while (*s && *s == c)
            s++;
        tab[i] = ft_strsub(s, 0, wordlen(s, c));
        if (tab[i] == NULL)
            return (NULL);
        s += wordlen(s, c);
        i++;
    }
    tab[i] = '\0';
    return (tab);
}