/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-d <jalves-d@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 11:09:45 by jalves-d          #+#    #+#             */
/*   Updated: 2021/02/24 11:12:46 by jalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strrlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	char			*init;

	p = (char*)malloc(sizeof(const char) * (len + 1));
	if (!p || !s)
		return (0);
	i = start + len;
	if (start >= ft_strrlen(s))
		return (p);
	init = p;
	while (start < i)
		*(p++) = *(s + start++);
	*(p++) = '\0';
	return (init);
}
