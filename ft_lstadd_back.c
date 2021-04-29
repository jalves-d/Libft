/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-d <jalves-d@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:58:06 by jalves-d          #+#    #+#             */
/*   Updated: 2021/02/12 16:59:23 by jalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (!(last))
		*lst = new;
	else
	{
		while (last)
		{
			if (last->next == 0)
			{
				last->next = new;
				return ;
			}
			else
				last = last->next;
		}
	}
}
