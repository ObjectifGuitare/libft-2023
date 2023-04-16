/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:31:29 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/04 14:43:50 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long long nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long long	nb;
	int			i;
	char		*result;

	nb = (long long)n;
	i = int_len(nb);
	result = malloc(i + 1);
	if (!result)
		return (0x0);
	result[i--] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	while (nb > 9)
	{
		result[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	result[i] = nb + '0';
	return (result);
}
