/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:03:33 by fberger           #+#    #+#             */
/*   Updated: 2018/11/10 20:15:46 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strnstr(const char *m, const char *a, size_t n)
{
	size_t i;
	size_t j;

	i = -1;
	while (m[++i] != '\0' && i < n)
	{
		j = 0;
		while (a[j] == m[i + j] && (i + j) < n)
			j++;
		if (a[j] == '\0')
			return (((char *)m) + i);
	}
	return (NULL);
}
