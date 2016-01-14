/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:28 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/10 11:10:28 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
    t_list *next;
    
    while (*alst)
    {
        next = (*alst)->next;
        ft_lstdelone(alst, del);
        *alst = next;
    }
}
