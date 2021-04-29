/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-d <jalves-d@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 01:32:04 by jalves-d          #+#    #+#             */
/*   Updated: 2021/02/24 11:06:14 by jalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t a, size_t b)
{
	void	*p;
	size_t	total;

	total = a * b;
	p = (void *)malloc(total);
	if (!p)
		return (0);
	else
	{
		while (total + 1 != 1)
		{
			((char*)p)[total - 1] = 0;
			total--;
		}
	}
	return (p);
}
