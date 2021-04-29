/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-d <jalves-d@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:52:16 by jalves-d          #+#    #+#             */
/*   Updated: 2021/02/24 10:53:05 by jalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(src);
	j = ft_strlen(dest);
	if (size == 0)
		return (i);
	if (size < j)
		i += size;
	else
		i += j;
	k = 0;
	while (src[k] != '\0' && j < size - 1 && dest != src)
	{
		dest[j] = src[k];
		k++;
		j++;
	}
	dest[j] = '\0';
	return (i);
}
