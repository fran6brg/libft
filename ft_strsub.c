/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 05:30:28 by fberger           #+#    #+#             */
/*   Updated: 2018/11/13 19:19:06 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*sub;

	i = -1;
	while (s[++i])
	{
		if (i == start)
		{
			if ((sub = malloc(sizeof(char) * len + 1)) == NULL)
				return ((char *)NULL);
			j = -1;
			while (++j < len)
			{
				sub[i] = s[i + j];
			}
			return (sub);
		}
	}
	return ((char *)NULL);
}
