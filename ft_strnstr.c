/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:11:16 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/09 11:39:33 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	register int	i;

	if (*little == 0)
		return ((char *)big);
	if (len == 0)
		return (0x0);
	while (len && *big)
	{
		i = 0;
		while (little[i] == *(big + i) && len - i > 0)
		{
			i++;
			if (little[i] == 0)
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (0x0);
}
