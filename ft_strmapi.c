/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 04:58:12 by fberger           #+#    #+#             */
/*   Updated: 2018/11/11 05:03:21 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_s;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[++i])
			;
		if ((new_s = malloc(sizeof(char) * (i + 1))) == NULL)
			return ((char *)NULL);
		while (s[++i])
			new_s[i] = f(i, s[i]);
		return (new_s);
	}
	return ((char *)NULL);
}
