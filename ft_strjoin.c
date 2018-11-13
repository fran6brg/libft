/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 06:04:39 by fberger           #+#    #+#             */
/*   Updated: 2018/11/13 19:22:14 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*join;

	if (s1 != NULL && s2 != NULL)
	{
		join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (join == NULL)
			return (NULL);
		i = -1;
		while (s1[++i] != '\0')
			join[i] = s1[i];
		i = -1;
		while (s2[++i] != '\0')
			join[ft_strlen(s1) + i] = s2[i];
		return (join);
	}
	return (NULL);
}
