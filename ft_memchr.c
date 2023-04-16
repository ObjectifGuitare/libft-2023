/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:46:12 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/04 15:50:23 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*clone;
	register size_t		i;

	clone = s;
	i = 0;
	while (i < n)
	{
		if (clone[i] == (unsigned char)c)
			return ((void *) clone + i);
		i++;
	}
	return (0x0);
}
