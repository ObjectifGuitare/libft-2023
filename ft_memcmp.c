/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:57:33 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/09 11:38:27 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*clone1;
	unsigned char	*clone2;
	register size_t	i;

	i = 0;
	clone1 = (unsigned char *) s1;
	clone2 = (unsigned char *) s2;
	while (n-- > 0)
	{
		if (*clone1 != *clone2)
			return (*clone1 - *clone2);
		clone1++;
		clone2++;
	}
	return (0);
}
