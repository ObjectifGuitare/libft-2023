/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:10:00 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/07 09:45:40 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	register int	i;

	c = (unsigned char) c;
	i = ft_strlen(s) - 1;
	if (c == 0)
		return ((char *)(&(s[i + 1])));
	while (s[i] != c && i > 0 && s[i])
	{
		i--;
		if (i == 0 && s[i] != c)
			return (0x0);
	}
	if (s[i] == 0 && c != 0)
		return (0x0);
	return ((char *)(&(s[i])));
}
