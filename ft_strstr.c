/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:41 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/10 11:10:41 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *str, const char *to_find)
{
    int i;
    
    i = 0;
    if (to_find[0] == '\0')
        return ((char*)str);
    while (str[i] != '\0')
    {
        if (ft_strncmp((char *)(str + i), to_find, ft_strlen(to_find)) == 0)
            return ((char *)(str + i));
        i++;
    }
    return (NULL);
}
