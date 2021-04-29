/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-d <jalves-d@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:51:42 by jalves-d          #+#    #+#             */
/*   Updated: 2021/03/02 10:09:07 by jalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*us;
	size_t			i;

	uc = c;
	us = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (us[i] == uc)
		{
			return (&us[i]);
		}
		i++;
	}
	return (0);
}
