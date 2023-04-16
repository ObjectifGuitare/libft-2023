/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:43:08 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/05 13:49:59 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*srclone;
	unsigned char	*result;

	if (!dest && !src)
		return (0x0);
	srclone = (unsigned char *)src;
	result = dest;
	while (n--)
		*result++ = *srclone++;
	return (dest);
}
