/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:32 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/10 11:10:32 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;
    
    ptr = (unsigned char *)s;
    while (n-- > 0)
    {
        *ptr = (unsigned char)c;
        ptr++;
    }
    return (s);
}
