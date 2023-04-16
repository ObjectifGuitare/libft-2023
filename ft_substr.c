/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:50:47 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/14 11:45:33 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_me_daddy(char const *s, unsigned int i, size_t len)
{
	register int	count;

	count = 0;
	while (s[i++] && len--)
		count++;
	return (count + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	i;

	if (!s)
		return (0x0);
	i = 0;
	while (s[i] && i < start)
		i++;
	result = malloc(count_me_daddy(s, i, len));
	if (!result)
		return (0x0);
	if (!(s[i]))
	{
		*result = 0;
		return (result);
	}
	i = 0;
	while (len-- && s[start])
		result[i++] = s[start++];
	result[i] = 0;
	return (result);
}
