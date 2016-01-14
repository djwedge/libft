/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:41 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/10 11:10:41 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char            *dest;
    unsigned int    i;
    
    dest = (char *)malloc(sizeof(dest) * len);
    if (dest == 0)
        return (NULL);
    i = 0;
    while (len-- > 0)
    {
        dest[i] = s[start];
        i++;
        start++;
    }
    dest[i] = '\0';    
    return (dest);
}
