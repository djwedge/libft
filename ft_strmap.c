/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:38 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/10 11:10:38 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char    *dest;
    int     i;
    
    dest = (char *)malloc(sizeof(dest) * ft_strlen(s));
    if (dest == 0)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        dest[i] = f(s[i]);
        i++;
    }
    return (dest);
}
