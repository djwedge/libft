/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbummer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/16 11:31:32 by dbummer           #+#    #+#             */
/*   Updated: 2016/01/16 12:47:27 by dbummer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_digits(int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_putnbr_in_str(int n, char *str, int len)
{
	int neg;

	neg = 0;
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		str[0] = '-';
}

char		*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = nb_digits(n);
	res = (char *)malloc(sizeof(*res) * (len + 1));
	if (res == 0)
		return (NULL);
	ft_putnbr_in_str(n, res, len);
	res[len] = '\0';
	return (res);
}
