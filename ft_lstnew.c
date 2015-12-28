#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list      *newlist;
    
    newlist = (t_list *)malloc(sizeof(t_list));
    if (newlist == 0)
        return (NULL);
    if (content != NULL)
    {
        newlist->content = malloc(sizeof(content));
		if (newlist->content == NULL)
			return (NULL);
        ft_memcpy(newlist->content, content, sizeof(content));
        newlist->content_size = content_size;
    }
    else
    {
        newlist->content = NULL;
        newlist->content_size = 0;
    }
    newlist->next = NULL;    
    return (newlist);
}