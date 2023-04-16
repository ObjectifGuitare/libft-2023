/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:09:59 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/08 14:08:22 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	find_index(int *start, int *end, const char *s1, const char *set)
{
	register int	i;

	i = -1;
	while (set[++i] && s1[*start])
	{
		if (set[i] == s1[*start])
		{
			i = -1;
			(*start) += 1;
		}
	}
	i = -1;
	*end = ft_strlen(s1) - 1;
	while (set[++i] && *end)
	{
		if (set[i] == s1[*end])
		{
			i = -1;
			(*end)--;
		}
	}
	(*end)++;
}

static char	*end_me_daddy(void)
{
	char	*result;

	result = malloc(1);
	if (!result)
		return (0x0);
	*result = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*result;
	int		start;
	int		end;

	if (!s1)
		return (0x0);
	if (!set)
		return (ft_strdup((char *) s1));
	start = 0;
	end = 0;
	find_index(&start, &end, s1, set);
	len = end - start;
	if (len < 0)
		return (end_me_daddy());
	result = malloc(len + 1);
	if (!result)
		return (0x0);
	while (start < end)
	{
		*result++ = s1[start++];
	}
	*result = '\0';
	return (result - len);
}
