/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-d <jalves-d@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 11:07:47 by jalves-d          #+#    #+#             */
/*   Updated: 2021/02/24 11:50:24 by jalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	spcount(char const *str, char charset)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		while (*str && (*str == charset))
			str++;
		if (!(*str == charset) && *str)
		{
			i++;
			while (*str && !(*str == charset))
				str++;
		}
	}
	return (i);
}

char			*ft_strnncpy(char *dest, char const *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char			**ft_split(char const *s, char c)
{
	unsigned int	i;
	char const		*p;
	char			**sparray;

	sparray = (char**)malloc(sizeof(char*) * (spcount(s, c) + 1));
	if (!sparray || !s)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (!(*s == c) && *s)
		{
			p = s;
			while (*s && !(*s == c))
				s++;
			sparray[i] = (char*)malloc(sizeof(char*) * ((s - p) + 1));
			ft_strnncpy(sparray[i], p, s - p);
			i++;
		}
	}
	sparray[i] = 0;
	return (sparray);
}
