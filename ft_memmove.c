/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:49:02 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/05 13:36:13 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*srclone;
	unsigned char	*result;
	register size_t	i;

	if (src == 0x0 && dest == 0x0)
		return (0x0);
	if (dest == src)
		return (dest);
	srclone = (unsigned char *)src;
	result = (unsigned char *)dest;
	i = -1;
	if (srclone > result)
		while (++i < n)
			result[i] = srclone[i];
	if (srclone < result)
		while (n--)
			result[n] = srclone[n];
	return (result);
}
