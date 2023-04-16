/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:50:39 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/04 11:51:47 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = ft_strlen(src);
	result = malloc(i + 1);
	if (!result)
		return (0x0);
	result[i] = '\0';
	while (--i >= 0)
		result[i] = src[i];
	return (result);
}
