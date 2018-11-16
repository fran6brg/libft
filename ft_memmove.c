/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:49:44 by fberger           #+#    #+#             */
/*   Updated: 2018/11/13 21:40:15 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;
	char	*broker;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if ((broker = malloc(sizeof(char) * n)) == NULL)
	  return ((void *)NULL);
	while (i < n)
	{
		broker[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = broker[i];
		i++;
	}
	return (dest);
}
