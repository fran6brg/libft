/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 06:30:59 by fberger           #+#    #+#             */
/*   Updated: 2018/11/13 23:56:22 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_ws(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static int	is_last_ws(char const *str)
{
	int		i;

	i = -1;
	while (is_ws(str[++i]))
		;
	return ((str[i] == '\0') ? 1 : 0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		len;
	char	*new_s;

	if (s == NULL)
		return ((char *)NULL);
	i = -1;
	while (s[++i] && is_ws(s[i]))
		;
	start = i;
	i = -1;
	while (s[start + ++i] && !is_last_ws(&s[start + i]))
		;
	len = i;
	if ((new_s = malloc(sizeof(char) * len)) == NULL)
		return ((char *)NULL);
	i = -1;
	while (s[start + ++i] && i < len)
		new_s[i] = s[start + i];
	new_s[++i] = '\0';
	return (new_s);
}
