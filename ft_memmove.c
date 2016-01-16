/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:32 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/16 15:05:41 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	if (s <= d)
	{
		d += n - 1;
		s += n - 1;
		while (n != 0)
		{
			*d-- = *s--;
			n--;
		}
	}
	else
		return (ft_memcpy(d, s, n));
	return (dest);
}
