/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/16 15:25:28 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/16 15:34:13 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_bits(unsigned char bit)
{
	int		i;
	char	c;

	i = 128;
	while (i > 0)
	{
		if (bit < i)
		{
			c = '0';
			i = i / 2;
			ft_putchar(c);
		}
		else
		{
			c = '1';
			ft_putchar(c);
			bit = bit - i;
			i = i / 2;
		}
	}
}
