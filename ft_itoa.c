/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-d <jalves-d@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 11:07:33 by jalves-d          #+#    #+#             */
/*   Updated: 2021/02/24 11:08:42 by jalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		cont(int nb)
{
	int		i;

	i = 0;
	if (nb == -2147483648)
		return (11);
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*p;
	int		nb;
	long	n;

	n = nbr;
	nb = cont(n);
	p = (char*)malloc(sizeof(char) * (nb + 1));
	if (!p)
		return (0);
	p[nb--] = '\0';
	if (n == 0)
		p[0] = '0';
	if (n < 0)
		p[0] = '-';
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		p[nb] = (n % 10) + '0';
		n = n / 10;
		nb--;
	}
	return (p);
}
