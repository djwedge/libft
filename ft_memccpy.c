/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:30 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/10 11:10:30 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t  i;
    char    *d;
    char    *s;
    
    i = 0;
    d = (char *)dest;
    s = (char *)src;
    while (i < n)
    {
        d[i] = s[i];
        if (s[i] == (char)c)
            return (dest + i + 1);
        i++;
    }
    return (NULL);
}
