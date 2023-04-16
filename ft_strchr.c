/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:29:01 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/07 09:35:00 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	register int	i;

	i = 0;
	while (s[i] != (unsigned char) c && s[i])
		i++;
	if (s[i] == 0 && (unsigned char) c != 0)
		return (0x0);
	return ((char *)&(s[i]));
}
