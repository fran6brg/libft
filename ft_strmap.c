/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 04:37:58 by fberger           #+#    #+#             */
/*   Updated: 2018/11/11 05:02:39 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new_s;

	if (s != NULL && f)
	{
		i = 0;
		while (s[++i])
			;
		if ((new_s = malloc(sizeof(char) * (i + 1))) == NULL)
			return ((char *)NULL);
		while (s[++i])
			new_s[i] = f(s[i]);
		return (new_s);
	}
	return ((char *)NULL);
}
