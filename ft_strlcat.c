/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:10:33 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/07 07:17:32 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	register size_t	i;
	register size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	j = ft_strlen(dst);
	if (size <= j)
		return (ft_strlen(src) + size);
	i = 0;
	while (src[i] && i < size - j - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + ft_strlen(src));
}
