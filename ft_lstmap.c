/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:31:49 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/15 15:31:32 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*result;

	if (!lst || !f)
		return (0x0);
	result = 0x0;
	while (lst)
	{
		dest = ft_lstnew(((t_list *)f(lst->content)));
		if (!dest)
		{
			if (del)
				ft_lstclear(&result, del);
			return (0x0);
		}
		ft_lstadd_back(&result, dest);
		lst = lst->next;
	}
	return (result);
}
