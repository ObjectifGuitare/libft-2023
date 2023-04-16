/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepatez <sepatez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:31:10 by sepatez           #+#    #+#             */
/*   Updated: 2023/04/14 11:07:54 by sepatez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*result;
	size_t		slots;

	slots = nmemb * size;
	if (slots < nmemb || slots < size)
		return (0x0);
	if (slots == 0)
		slots = 1;
	result = malloc(slots);
	if (!result)
		return (0x0);
	ft_bzero(result, slots);
	return (result);
}
