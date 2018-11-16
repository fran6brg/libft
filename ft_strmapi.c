/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 04:58:12 by fberger           #+#    #+#             */
/*   Updated: 2018/11/13 23:18:34 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*new_s;

	if (s && f)
	{
		i = 0;
		while (s[i])
			i++;
		if ((new_s = malloc(sizeof(char *) * ft_strlen(s) + 1)) == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			new_s[i] = f(i, s[i]);
			i++;
		}
		return (new_s);
	}
	return (NULL);
}
