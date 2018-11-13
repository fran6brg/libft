/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 03:50:10 by fberger           #+#    #+#             */
/*   Updated: 2018/11/11 04:03:40 by fberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	if ((ptr = malloc(sizeof(char) * size)) == NULL)
		return ((char *)NULL);
	while (--size >= 0)
		ptr[size] = '\0';
	return (ptr);
}
