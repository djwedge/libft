/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:40 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/16 09:28:19 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (i < n && str[i] != '\0')
	{
		j = i;
		k = 0;
		while (j < n && str[j] == to_find[k])
		{
			j++;
			k++;
			if (to_find[k] == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
