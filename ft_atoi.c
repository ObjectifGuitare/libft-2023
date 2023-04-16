/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:30:58 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/09 12:10:24 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	ft_is_space(char c)
{
	return (c == '\f' || c == '\n' || c == ' '
		|| c == '\r' || c == '\t' || c == '\v');
}

int	ft_atoi(const char *nptr)
{
	long long	n;
	long long	multi;

	multi = 1;
	n = 0;
	while (ft_is_space(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			multi *= -1;
	while (*nptr >= '0' && *nptr <= '9')
	{
		n = (n * 10) + (*nptr++ - '0');
		if (n < 0)
		{
			if (multi == 1)
				return (-1);
			return (0);
		}
	}
	return (n * multi);
}
