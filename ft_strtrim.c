/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-d <jalves-d@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 11:08:01 by jalves-d          #+#    #+#             */
/*   Updated: 2021/02/24 11:09:13 by jalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ischar(char c, char const *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

unsigned int	count(char const *str, char const *charset)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	while (ischar(str[i], charset) == 1)
		i++;
	if (i == j)
		return (0);
	while (ischar(str[j - 1], charset) == 1)
		j--;
	return (j - i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!set || !s1)
		return (0);
	while (ischar(s1[i], set))
		i++;
	while (s1[j])
		j++;
	p = (char*)malloc(sizeof(char) * (count(s1, set) + 1));
	if (!p)
		return (0);
	while (ischar(s1[j - 1], set))
		j--;
	k = 0;
	while (i < j)
		p[k++] = s1[i++];
	p[k] = 0;
	return (p);
}
