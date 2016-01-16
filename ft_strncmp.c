/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 11:10:39 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/16 09:20:09 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n)
	{
		while (*s1 == *s2 && n-- > 0)
		{
			if (*s1 == '\0' || n == 0)
				return (0);
			s1++;
			s2++;
		}
		if (*(unsigned char *)s1 > *(unsigned char *)s2)
			return (1);
		else
			return (-1);
	}
	return (0);
}
