/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:31:37 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/07 10:41:02 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*victim;

	if (!lst | !del)
		return ;
	while (*lst)
	{
		victim = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(victim, del);
	}
}
