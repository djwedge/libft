/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:40 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/10 11:10:40 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnew(size_t size)
{
    char *dest;
    
    dest = (char *)malloc(sizeof(dest) * size);
    if (dest == 0)
        return (NULL);
    while (size-- > 0)
        dest[size] = '\0';
    return (dest);
}
