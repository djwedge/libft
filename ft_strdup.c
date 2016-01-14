/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:36 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/10 11:10:36 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	size_t	index;
	char	*dest;

	index = 0;
	dest = (char*)malloc(sizeof(*dest) * (ft_strlen(src) + 1));
	if (dest == 0)
		return (NULL);
	while (index < ft_strlen(src))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
