/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:32 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/10 11:10:32 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *s;
    char    *d;
    char    *tmp;
    
    s = (char *)src;
    d = (char *)dest;
    tmp = (char *)malloc(n);
    ft_memcpy(tmp, s, n);
    ft_memcpy(d, tmp, n);
    free(tmp);
    return (dest);
}
