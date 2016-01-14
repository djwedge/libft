/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:30 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/10 11:10:30 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
