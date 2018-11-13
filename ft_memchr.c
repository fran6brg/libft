/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:51:21 by fberger           #+#    #+#             */
/*   Updated: 2018/11/13 18:51:46 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*sptr;

	i = -1;
	sptr = (char *)s;
	while (++i < n)
	{
		if (sptr[i] == c)
			return ((void *)sptr);
	}
	return (NULL);
}
