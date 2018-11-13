/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 04:37:58 by fberger           #+#    #+#             */
/*   Updated: 2018/11/13 23:09:47 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new_s;

	if (s && f)
	{
		i = -1;
		while (s[++i])
			;
		if ((new_s = malloc(sizeof(char) * i + 1)) == NULL)
			return (NULL);
		while (i-- > 0)
			new_s[i] = f(s[i]);
		return (new_s);
	}
	return (NULL);
}
