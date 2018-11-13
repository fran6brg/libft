/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:34:10 by fberger           #+#    #+#             */
/*   Updated: 2018/11/13 19:39:34 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getlen(int n)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*put_min_int(char *str)
{
	ft_strcpy(str, "-2147483648");
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		ns;

	len = getlen(n);
	ns = n;
	if (!(str = (char *)malloc(sizeof(*str) * len + 1)))
		return (NULL);
	str[len] = '\0';
	if (n != -2147483648)
	{
		if (n < 0)
			n = n * -1;
		while (len > 0)
		{
			str[len - 1] = (n % 10) + 48;
			n = n / 10;
			len--;
		}
		if (str[0] == '0' && ns != 0)
			str[0] = '-';
	}
	else
		put_min_int(str);
	return (str);
}
