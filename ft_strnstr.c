/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-d <jalves-d@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 01:12:05 by jalves-d          #+#    #+#             */
/*   Updated: 2021/02/24 10:53:27 by jalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (*to_find == 0)
		return ((char*)str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while ((to_find[j] == str[i + j]) && i + j < len)
		{
			if (to_find[j + 1] == '\0')
				return ((char*)str + i);
			j++;
		}
		i++;
	}
	return (0);
}
