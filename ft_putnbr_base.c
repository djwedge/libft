/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <dbummer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 22:22:42 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/16 15:33:05 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int nb, char *base)
{
	size_t n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n >= ft_strlen(base))
	{
		ft_putnbr_base(n / ft_strlen(base), base);
		ft_putnbr_base(n % ft_strlen(base), base);
	}
	else
		ft_putchar(base[n]);
}
